#!/usr/bin/env python3
"""Restore individually indexed native method exports without replacing edits."""
import json
from unpack_evidence import unpack

if __name__ == '__main__':
    print(json.dumps(unpack(manifest_path='analysis/native-methods/archive-manifest.json',
                            allowed_prefix='analysis/native-methods/methods/'), indent=2))
