#!/usr/bin/env python3
"""Run a reproducible native pass with an installed official Ghidra + JDK 21."""
import argparse,hashlib,os,pathlib,subprocess
EXPECTED='809ce5d189ac6e5e4479eda7a2fdfab886a03363fce7c40e06d2a80bb7306154'
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('executable',type=pathlib.Path);p.add_argument('--ghidra-home',type=pathlib.Path,default=pathlib.Path(os.environ.get('GHIDRA_HOME','.')));p.add_argument('--project',type=pathlib.Path,default=pathlib.Path('private-input/ghidra-project'));p.add_argument('--skip-message-analyzer',action='store_true',help='Use the documented workaround for Ghidra Objective-C message analyzer exceptions');a=p.parse_args();root=pathlib.Path(__file__).resolve().parents[1]
 if hashlib.sha256(a.executable.read_bytes()).hexdigest()!=EXPECTED:raise ValueError('Wrong executable baseline')
 binary=a.ghidra_home/'support'/('analyzeHeadless.bat' if os.name=='nt' else 'analyzeHeadless')
 if not binary.is_file():raise ValueError('Set --ghidra-home to a complete official Ghidra installation')
 a.project.mkdir(parents=True,exist_ok=True);out=root/'recovered/decompiled';out.mkdir(parents=True,exist_ok=True);scripts=root/'scripts/ghidra'
 command=[str(binary.resolve()),str(a.project.resolve()),'ESign502','-import',str(a.executable.resolve()),'-overwrite','-scriptPath',str(scripts),'-analysisTimeoutPerFile','1200','-max-cpu','4']
 if a.skip_message_analyzer:command+=['-preScript','ConfigureRecovery.java']
 command+=['-postScript','ExportRecovery.java',str(out),str(root/'recovered/objc/methods.tsv'),'-log',str(out/'ghidra-analysis.log')]
 print('Running:',command,flush=True);raise SystemExit(subprocess.call(command))
if __name__=='__main__':main()
