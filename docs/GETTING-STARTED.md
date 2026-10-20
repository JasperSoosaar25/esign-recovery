# Get the recovery and build the available source

Clone [esign-recovery](https://github.com/JasperSoosaar25/esign-recovery):

```sh
git clone https://github.com/JasperSoosaar25/esign-recovery.git
cd esign-recovery
```

## What you can build

On a Mac with Xcode, open `ESignRecovery.xcodeproj`, select **RecoveredComponents** and a generic iOS device, then build. Or run:

```sh
python3 scripts/build_component_project.py
```

The project builds fifteen arm64 iOS static libraries. It has no ESign application target, runnable app bundle or source-built IPA. The exact [combined build report](builds/component-project-bfe2c88d.json) records the tested toolchain, source hashes and library artifacts. Test adapters are excluded from these libraries. Missing original implementations still prevent a complete app link.

For behavior comparisons and analysis, create a Python virtual environment, install the pinned `requirements-reconstruction.txt`, and restore the evidence:

```sh
python3 -m venv .venv
. .venv/bin/activate
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/unpack_evidence.py
python3 scripts/unpack_native_methods.py
python3 scripts/recover_asn1_input.py --verify
python3 -m unittest discover -s tests -v
```

Read [DEVELOPMENT.md](../DEVELOPMENT.md) for every verifier and [CONTRIBUTING.md](../CONTRIBUTING.md) for source/evidence and licensing rules.

## Original selected IPA

The original compiled input is available from this [commit-pinned public mirror](https://raw.githubusercontent.com/nooptr/esign/e48b19239ea1b1c725134350db8ab1a15ce3ff88/esign_5.0.2_unsigned.ipa). It is the input used for reconstruction; it was not compiled from this repository.

Expected size: **7,522,792 bytes**. Expected SHA-256:

```text
f00116a398972c83bc13b8c0b10d2a6ee580e404aa122bd6b4aadb4a1e479a29
```

Its bytes match the user's Filebin input. This confirms file identity; it does not independently authenticate a developer release. See [input provenance](INPUT-PROVENANCE.md). Keep the IPA outside the checkout and verify it with:

```sh
python3 scripts/verify_against_ipa.py /path/to/esign_5.0.2_unsigned.ipa
python3 scripts/verify_app_analysis.py --ipa /path/to/esign_5.0.2_unsigned.ipa
```

## What remains

Original recursive ASN.1/CMS decoding, certificate/P12 processing, signing/archive/install orchestration and most application/UI source remain unfinished. No actual iPhone run, iOS 27 result or running-app screenshot is available. [Build status](BUILD-STATUS.md) tracks those requirements; [the dependency map](SIGNING-DEPENDENCIES.md) identifies the next original code. [Community feature ideas](IDEAS.md) remain proposals for later development.
