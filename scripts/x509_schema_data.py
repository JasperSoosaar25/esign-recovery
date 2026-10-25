"""Additional original name/ENUMERATED schema nodes, reusing the CMS graph."""
import gzip,json,hashlib
from pathlib import Path
from cms_schema_data import extract as graph,render as render_graph
ROOT=Path(__file__).resolve().parents[1]
ROOTS=[0x100b1e748,0x100b1ef28]
SCHEMA_SHA256='9fae3b1aa5c357afe6d94d8a754bfc7feff343eb7c6325d2dc74bb5b43fba332'
def base_schema():return json.loads(gzip.decompress((ROOT/'reconstruction/cms-schema/schema.json.gz').read_bytes()))
def extract(image):
    base=graph(image);known={r['address'] for r in base};nodes={}
    for a in ROOTS:nodes.update({r['address']:r for r in graph(image,a) if r['address'] not in known})
    return sorted(nodes.values(),key=lambda r:int(r['address'],16))
def render(nodes):return render_graph(nodes,external=base_schema(),registry='ESignOriginalX509Schema').replace('#include "ESignCMSSchema.h"','#include "../cms-schema/ESignCMSSchema.h"').replace('#include "ESignCMSSchemaDependencies.h"','#include "../cms-schema/ESignCMSSchemaDependencies.h"')
def schema():
    b=gzip.decompress((ROOT/'reconstruction/x509-state/schema.json.gz').read_bytes())
    if hashlib.sha256(b).hexdigest()!=SCHEMA_SHA256:raise ValueError('Changed original additional X509 schema')
    return json.loads(b)
