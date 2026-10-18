# Working in this repository

- Preserve the distinction between exact resources, decoded metadata, decompiled output, and new implementations.
- This is ESign 5.0.2 recovery, not KravaSigner or Feather source.
- Do not claim a source-only build, iOS 27 run, or feature equivalence without a real verified result.
- The current request is to make the original app buildable and show real screenshots, with a strict original-implementation-only constraint. This is still blocked by incomplete source recovery and absent original-device runtime access. No replacement implementation, other signing engine, unrelated app base, binary wrapper, or mock screenshot may be presented as meeting it. Analysis scripts/tools are separate from app runtime code.
- Read DEVELOPMENT.md and CONTRIBUTING.md before implementation work. Keep a future app source tree separate from recovered evidence.
- Run the recovery verifier and meaningful tool tests after changes. Keep profiles, signing keys, original app binaries, and personal data out of Git.
- Run `python3 scripts/unpack_evidence.py` after cloning to restore the complete generated snapshot. Do not edit baseline archive parts to hide evidence changes.
- Preserve ownership and dependency notices. New-code licensing does not relicense ESign.
