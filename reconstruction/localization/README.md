# Native localization source reconstruction

This component implements all 13 methods belonging to the 10 original `YYYLocalized*` classes, plus the behavior of the original one-time initialization block at `0x100831da4`. It uses the original class names and selectors. It is newly reconstructed Objective-C source, not the original author's project or source formatting.

`ESignLocalizationTables.m` preserves the original factory method and all 3,812 ordered key/value pairs. `ESignLocalization.m` reconstructs version 100, lazy locale selection, Chinese variants, dynamic class lookup, missing-key logging/fallback, dictionary type checks, and overlay merging. An overlay submitted before first lookup deliberately has no effect, matching the original nil cache. No new app feature is added.

The exact IPA's original ARM64 instructions were executed in Unicorn under controlled Foundation/ARC call models. All 10 dictionaries and 7,931 lookups across 18 locale configurations passed. The recovered source also has a separate Apple SDK compilation and Foundation runtime check in GitHub Actions. See that job's actual result and artifact report for the toolchain and outcome; the existence of this directory alone does not prove a successful build.

## Files and reproduction

- `dictionaries.json`: ordered original key/value pairs, including original spellings and translation gaps.
- `runtime-fixtures.json`: cache results and effects captured from original-instruction execution.
- `evidence.json.gz`: original instruction traces, the initializer block, exact required initial data, and explicit imported-runtime models.
- `index.json`: counts, source/evidence hashes, and limits.

From the repository root:

```sh
python3 scripts/unpack_evidence.py
python3 -m pip install -r requirements-reconstruction.txt
python3 scripts/recover_localization.py --verify
# Optional independent comparison with the exact input:
python3 scripts/recover_localization.py --verify --original-ipa /path/to/esign_5.0.2_unsigned.ipa
# On macOS with Xcode: build arm64 iOS library and run macOS Foundation tests:
python3 scripts/build_localization.py
```

The build produces a static component library and toolchain report. It produces no app or IPA and does not run on an iPhone. The Foundation checks exercise the component on macOS; the instruction checks use modeled Foundation/ARC calls. Neither establishes ARC lifetime equivalence, concurrent behavior, signing, installation, UI equivalence, or full-app iOS 27 compatibility. Class layout, globals, and original method addresses are documented in the source and evidence. ESign-derived material retains its applicable ownership; the tools' license does not relicense it.
