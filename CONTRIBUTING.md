# Contributing

Fork, create a branch, and open a pull request with a focused change. Recovery fixes, dependency identification, source reconstruction, test cases, documentation, accessibility, and future feature ideas are welcome.

For recovery changes, provide the exact input hash, original addresses/ABIs, script version, and reproducible evidence. Preserve baseline resources and generated output unless correcting a documented recovery error. Keep newly implemented source separate from machine-generated pseudocode.

For a new implementation, describe the trigger and expected behavior, assumptions inherited from decompilation, and meaningful tests. Include real device/runtime details for compatibility claims. Open a proposal before a large redesign or signing-pipeline rewrite.

Run `python3 scripts/unpack_evidence.py`, `python3 scripts/verify_repository.py`, `python3 scripts/verify_original_flow.py`, `python3 scripts/verify_app_analysis.py`, and `python3 -m unittest discover -s tests -v`. Install the pinned recovery requirements in a virtual environment to run all 29 tool tests and the expanded analysis verifier. These validate the evidence and tools, not application behavior. Follow [DEVELOPMENT.md](DEVELOPMENT.md), the original-only constraint in [BUILD-STATUS.md](docs/BUILD-STATUS.md), and the licensing boundaries in [LICENSE](LICENSE).

Do not commit IPA files, executables, provisioning/configuration profiles, certificates/private keys, passwords, pairing records, tokens, or identifying device data. Report sensitive findings through [SECURITY.md](SECURITY.md). Use invented fixtures in tests and redact device/certificate identifiers from issues and screenshots.
