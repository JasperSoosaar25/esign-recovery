/* Machine-level C reconstructions of a restricted original accessor subset.
 * Original object offsets and register effects only; not the original source project.
 * These fragments neither define Objective-C classes nor register method implementations.
 * See evidence.json.gz and index.json; no app or iPhone run is implied. */
#include <stdint.h>
#include <stddef.h>
#include <string.h>

/* -[YYYPlistInfoModel index] at 0x100010304; ABI q16@0:8 */
uint64_t esign_scalar_0000(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return value;
}

/* -[YYYPlistInfoModel setIndex:] at 0x100010324; ABI v24@0:8q16 */
void esign_scalar_0001(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYPlistInfoModel parentValueType] at 0x100010350; ABI Q16@0:8 */
uint64_t esign_scalar_0002(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 24, sizeof value);
    return value;
}

/* -[YYYPlistInfoModel setParentValueType:] at 0x100010370; ABI v24@0:8Q16 */
void esign_scalar_0003(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 24, &value, sizeof value);
}

/* -[YYYPlistInfoModel valueType] at 0x10001039c; ABI Q16@0:8 */
uint64_t esign_scalar_0004(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYPlistInfoModel setValueType:] at 0x1000103bc; ABI v24@0:8Q16 */
void esign_scalar_0005(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYPlistInfoModel showSub] at 0x1000104fc; ABI B16@0:8 */
uint64_t esign_scalar_0006(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYPlistInfoModel setShowSub:] at 0x10001051c; ABI v20@0:8B16 */
void esign_scalar_0007(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYDefaultSignConfig installWhenSign] at 0x1000283e0; ABI B16@0:8 */
uint64_t esign_scalar_0008(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setInstallWhenSign:] at 0x100028414; ABI v20@0:8B16 */
void esign_scalar_0009(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removePlugIns] at 0x100028450; ABI B16@0:8 */
uint64_t esign_scalar_0010(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setRemovePlugIns:] at 0x100028470; ABI v20@0:8B16 */
void esign_scalar_0011(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removeWatchs] at 0x1000284ac; ABI B16@0:8 */
uint64_t esign_scalar_0012(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setRemoveWatchs:] at 0x1000284d4; ABI v20@0:8B16 */
void esign_scalar_0013(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removeMinimumOSVersion] at 0x100028500; ABI B16@0:8 */
uint64_t esign_scalar_0014(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 11, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setRemoveMinimumOSVersion:] at 0x100028528; ABI v20@0:8B16 */
void esign_scalar_0015(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 11, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removeUISupportedDevices] at 0x100028554; ABI B16@0:8 */
uint64_t esign_scalar_0016(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setRemoveUISupportedDevices:] at 0x10002857c; ABI v20@0:8B16 */
void esign_scalar_0017(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removeURLScheme] at 0x10002859c; ABI B16@0:8 */
uint64_t esign_scalar_0018(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 13, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setRemoveURLScheme:] at 0x1000285d0; ABI v20@0:8B16 */
void esign_scalar_0019(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 13, &value, sizeof value);
}

/* -[YYYDefaultSignConfig addUISupportsDocumentBrowser] at 0x1000285f0; ABI B16@0:8 */
uint64_t esign_scalar_0020(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 14, sizeof value);
    return (value != 0);
}

/* -[YYYDefaultSignConfig setAddUISupportsDocumentBrowser:] at 0x100028618; ABI v20@0:8B16 */
void esign_scalar_0021(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 14, &value, sizeof value);
}

/* -[YYYDefaultSignConfig fixIcon] at 0x100028644; ABI B16@0:8 */
uint64_t esign_scalar_0022(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 15, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setFixIcon:] at 0x100028670; ABI v20@0:8B16 */
void esign_scalar_0023(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 15, &value, sizeof value);
}

/* -[YYYDefaultSignConfig fixJb] at 0x10002869c; ABI B16@0:8 */
uint64_t esign_scalar_0024(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setFixJb:] at 0x1000286b0; ABI v20@0:8B16 */
void esign_scalar_0025(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYDefaultSignConfig igonSign] at 0x1000286ec; ABI B16@0:8 */
uint64_t esign_scalar_0026(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 17, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setIgonSign:] at 0x10002870c; ABI v20@0:8B16 */
void esign_scalar_0027(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 17, &value, sizeof value);
}

/* -[YYYDefaultSignConfig removeEmbedded] at 0x100028714; ABI B16@0:8 */
uint64_t esign_scalar_0028(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 18, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setRemoveEmbedded:] at 0x100028734; ABI v20@0:8B16 */
void esign_scalar_0029(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 18, &value, sizeof value);
}

/* -[YYYDefaultSignConfig fileNameRule] at 0x1000288d0; ABI Q16@0:8 */
uint64_t esign_scalar_0030(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 64, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setFileNameRule:] at 0x1000288fc; ABI v24@0:8Q16 */
void esign_scalar_0031(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 64, &value, sizeof value);
}

/* -[YYYDefaultSignConfig injectPath] at 0x10002891c; ABI Q16@0:8 */
uint64_t esign_scalar_0032(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 72, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setInjectPath:] at 0x100028930; ABI v24@0:8Q16 */
void esign_scalar_0033(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 72, &value, sizeof value);
}

/* -[YYYDefaultSignConfig injectFolder] at 0x10002895c; ABI Q16@0:8 */
uint64_t esign_scalar_0034(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 80, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setInjectFolder:] at 0x10002897c; ABI v24@0:8Q16 */
void esign_scalar_0035(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 80, &value, sizeof value);
}

/* -[YYYDefaultSignConfig zipLevel] at 0x100028990; ABI Q16@0:8 */
uint64_t esign_scalar_0036(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 88, sizeof value);
    return value;
}

/* -[YYYDefaultSignConfig setZipLevel:] at 0x1000289a4; ABI v24@0:8Q16 */
void esign_scalar_0037(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 88, &value, sizeof value);
}

/* -[YYYClassIvarInfo offset] at 0x10003b3b0; ABI q16@0:8 */
uint64_t esign_scalar_0038(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 24, sizeof value);
    return value;
}

/* -[YYYClassIvarInfo type] at 0x10003b3e4; ABI Q16@0:8 */
uint64_t esign_scalar_0039(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 40, sizeof value);
    return value;
}

/* -[YYYClassMethodArgumentInfo type] at 0x10003b65c; ABI Q16@0:8 */
uint64_t esign_scalar_0040(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return value;
}

/* -[YYYClassMethodInfo returnType] at 0x10003c594; ABI Q16@0:8 */
uint64_t esign_scalar_0041(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 48, sizeof value);
    return value;
}

/* -[YYYClassPropertyInfo type] at 0x10003f034; ABI Q16@0:8 */
uint64_t esign_scalar_0042(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 24, sizeof value);
    return value;
}

/* -[YYYClassInfo isMeta] at 0x100041d84; ABI B16@0:8 */
uint64_t esign_scalar_0043(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYWebDAVXMLParser uriLength] at 0x100059400; ABI Q16@0:8 */
uint64_t esign_scalar_0044(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYWebDAVXMLParser setUriLength:] at 0x100059420; ABI v24@0:8Q16 */
void esign_scalar_0045(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYVideoPlayer state] at 0x10006a4a0; ABI q16@0:8 */
uint64_t esign_scalar_0046(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 40, sizeof value);
    return value;
}

/* -[YYYVideoPlayer isBuffering] at 0x10006a708; ABI B16@0:8 */
uint64_t esign_scalar_0047(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYVideoPlayer setBuffering:] at 0x10006a728; ABI v20@0:8B16 */
void esign_scalar_0048(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYVideoPlayer isPauseByUser] at 0x10006a764; ABI B16@0:8 */
uint64_t esign_scalar_0049(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYVideoPlayer setPauseByUser:] at 0x10006a778; ABI v20@0:8B16 */
void esign_scalar_0050(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYTableViewCellHelper setCellNumber:] at 0x1000885dc; ABI v24@0:8q16 */
void esign_scalar_0051(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 48, &value, sizeof value);
}

/* -[YYYTableViewCellHelper autoDeselectRow] at 0x1000885fc; ABI B16@0:8 */
uint64_t esign_scalar_0052(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYTableViewCellHelper setAutoDeselectRow:] at 0x100088604; ABI v20@0:8B16 */
void esign_scalar_0053(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYBackgroundTaskUtil backgroundTask] at 0x1000cf3f4; ABI Q16@0:8 */
uint64_t esign_scalar_0054(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYBackgroundTaskUtil setBackgroundTask:] at 0x1000cf420; ABI v24@0:8Q16 */
void esign_scalar_0055(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYBackgroundTaskUtil keepRunning] at 0x1000cf2e0; ABI B16@0:8 */
uint64_t esign_scalar_0056(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYBackgroundTaskUtil getUDIDRun] at 0x1000cf300; ABI B16@0:8 */
uint64_t esign_scalar_0057(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYBackgroundTaskUtil setGetUDIDRun:] at 0x1000cf320; ABI v20@0:8B16 */
void esign_scalar_0058(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYTrollAppInfo hasTryGetLogo] at 0x1001059e0; ABI B16@0:8 */
uint64_t esign_scalar_0059(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYTrollAppInfo setHasTryGetLogo:] at 0x100105a14; ABI v20@0:8B16 */
void esign_scalar_0060(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYTrollAppInfo isDecryptApp] at 0x100105f58; ABI B16@0:8 */
uint64_t esign_scalar_0061(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYTrollAppInfo setIsDecryptApp:] at 0x100105f8c; ABI v20@0:8B16 */
void esign_scalar_0062(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYReaderStyleHelper style] at 0x10011dfc8; ABI Q16@0:8 */
uint64_t esign_scalar_0063(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYReaderStyleHelper preferredStatusBarStyle] at 0x10011e198; ABI q16@0:8 */
uint64_t esign_scalar_0064(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 56, sizeof value);
    return value;
}

/* -[YYYReaderStyleHelper setPreferredStatusBarStyle:] at 0x10011e1c4; ABI v24@0:8q16 */
void esign_scalar_0065(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 56, &value, sizeof value);
}

/* -[YYYSignInfo removePlugIns] at 0x100167958; ABI B16@0:8 */
uint64_t esign_scalar_0066(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setRemovePlugIns:] at 0x10016798c; ABI v20@0:8B16 */
void esign_scalar_0067(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYSignInfo removeWatchs] at 0x1001679b8; ABI B16@0:8 */
uint64_t esign_scalar_0068(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYSignInfo setRemoveWatchs:] at 0x1001679cc; ABI v20@0:8B16 */
void esign_scalar_0069(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYSignInfo removeMinimumOSVersion] at 0x1001679ec; ABI B16@0:8 */
uint64_t esign_scalar_0070(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYSignInfo setRemoveMinimumOSVersion:] at 0x100167a0c; ABI v20@0:8B16 */
void esign_scalar_0071(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYSignInfo removeUISupportedDevices] at 0x100167a2c; ABI B16@0:8 */
uint64_t esign_scalar_0072(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 11, sizeof value);
    return value;
}

/* -[YYYSignInfo setRemoveUISupportedDevices:] at 0x100167a4c; ABI v20@0:8B16 */
void esign_scalar_0073(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 11, &value, sizeof value);
}

/* -[YYYSignInfo fixIcon] at 0x100167a7c; ABI B16@0:8 */
uint64_t esign_scalar_0074(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setFixIcon:] at 0x100167a98; ABI v20@0:8B16 */
void esign_scalar_0075(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYSignInfo fixJb] at 0x100167ac4; ABI B16@0:8 */
uint64_t esign_scalar_0076(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 13, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setFixJb:] at 0x100167af8; ABI v20@0:8B16 */
void esign_scalar_0077(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 13, &value, sizeof value);
}

/* -[YYYSignInfo addUISupportsDocumentBrowser] at 0x100167b24; ABI B16@0:8 */
uint64_t esign_scalar_0078(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 14, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setAddUISupportsDocumentBrowser:] at 0x100167b4c; ABI v20@0:8B16 */
void esign_scalar_0079(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 14, &value, sizeof value);
}

/* -[YYYSignInfo removeURLScheme] at 0x100167b78; ABI B16@0:8 */
uint64_t esign_scalar_0080(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 15, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setRemoveURLScheme:] at 0x100167b94; ABI v20@0:8B16 */
void esign_scalar_0081(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 15, &value, sizeof value);
}

/* -[YYYSignInfo installWhenSign] at 0x100167bb4; ABI B16@0:8 */
uint64_t esign_scalar_0082(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setInstallWhenSign:] at 0x100167be8; ABI v20@0:8B16 */
void esign_scalar_0083(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYSignInfo igonSign] at 0x100167bfc; ABI B16@0:8 */
uint64_t esign_scalar_0084(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 17, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setIgonSign:] at 0x100167c18; ABI v20@0:8B16 */
void esign_scalar_0085(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 17, &value, sizeof value);
}

/* -[YYYSignInfo setDuokai:] at 0x100167c38; ABI v20@0:8B16 */
void esign_scalar_0086(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 18, &value, sizeof value);
}

/* -[YYYSignInfo removeEmbedded] at 0x100167c58; ABI B16@0:8 */
uint64_t esign_scalar_0087(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 19, sizeof value);
    return (value != 0);
}

/* -[YYYSignInfo setRemoveEmbedded:] at 0x100167c74; ABI v20@0:8B16 */
void esign_scalar_0088(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 19, &value, sizeof value);
}

/* -[YYYSignInfo startIndex] at 0x100167c88; ABI q16@0:8 */
uint64_t esign_scalar_0089(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 72, sizeof value);
    return value;
}

/* -[YYYSignInfo setStartIndex:] at 0x100167ca8; ABI v24@0:8q16 */
void esign_scalar_0090(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 72, &value, sizeof value);
}

/* -[YYYSignInfo duokaiNumber] at 0x100167cd4; ABI q16@0:8 */
uint64_t esign_scalar_0091(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 80, sizeof value);
    return value;
}

/* -[YYYSignInfo setDuokaiNumber:] at 0x100167cf4; ABI v24@0:8q16 */
void esign_scalar_0092(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 80, &value, sizeof value);
}

/* -[YYYSignInfo injectPath] at 0x100167da0; ABI Q16@0:8 */
uint64_t esign_scalar_0093(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 96, sizeof value);
    return value;
}

/* -[YYYSignInfo setInjectPath:] at 0x100167dd0; ABI v24@0:8Q16 */
void esign_scalar_0094(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 96, &value, sizeof value);
}

/* -[YYYSignInfo injectFolder] at 0x100167dfc; ABI Q16@0:8 */
uint64_t esign_scalar_0095(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 104, sizeof value);
    return value;
}

/* -[YYYSignInfo setInjectFolder:] at 0x100167e2c; ABI v24@0:8Q16 */
void esign_scalar_0096(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 104, &value, sizeof value);
}

/* -[YYYSignInfo zipLevel] at 0x100167e4c; ABI Q16@0:8 */
uint64_t esign_scalar_0097(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 112, sizeof value);
    return value;
}

/* -[YYYSignInfo setZipLevel:] at 0x100167e60; ABI v24@0:8Q16 */
void esign_scalar_0098(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 112, &value, sizeof value);
}

/* -[YYYAppStoreApp size] at 0x10017f63c; ABI Q16@0:8 */
uint64_t esign_scalar_0099(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 96, sizeof value);
    return value;
}

/* -[YYYAppStoreApp setSize:] at 0x10017f668; ABI v24@0:8Q16 */
void esign_scalar_0100(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 96, &value, sizeof value);
}

/* -[YYYAppStoreApp isLanZouCloud] at 0x10017f754; ABI B16@0:8 */
uint64_t esign_scalar_0101(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYAppStoreApp setIsLanZouCloud:] at 0x10017f774; ABI v20@0:8B16 */
void esign_scalar_0102(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYAppStoreApp lock] at 0x10017f77c; ABI B16@0:8 */
uint64_t esign_scalar_0103(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYAppStoreApp setLock:] at 0x10017f790; ABI v20@0:8B16 */
void esign_scalar_0104(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYAppStoreApp type] at 0x10017f9bc; ABI Q16@0:8 */
uint64_t esign_scalar_0105(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 152, sizeof value);
    return value;
}

/* -[YYYAppStoreApp setType:] at 0x10017f9dc; ABI v24@0:8Q16 */
void esign_scalar_0106(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 152, &value, sizeof value);
}

/* -[YYYAppStoreSource isEncrypt] at 0x100193e08; ABI B16@0:8 */
uint64_t esign_scalar_0107(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYAppStoreSource setIsEncrypt:] at 0x100193e28; ABI v20@0:8B16 */
void esign_scalar_0108(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYAppStoreSource encryptTime] at 0x100193e54; ABI q16@0:8 */
uint64_t esign_scalar_0109(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 80, sizeof value);
    return value;
}

/* -[YYYAppStoreSource setEncryptTime:] at 0x100193e80; ABI v24@0:8q16 */
void esign_scalar_0110(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 80, &value, sizeof value);
}

/* -[YYYChapterModel index] at 0x1001b2b0c; ABI q16@0:8 */
uint64_t esign_scalar_0111(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 24, sizeof value);
    return value;
}

/* -[YYYChapterModel setIndex:] at 0x1001b2b38; ABI v24@0:8q16 */
void esign_scalar_0112(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 24, &value, sizeof value);
}

/* -[YYYBookReaderDivision index] at 0x1001b4ecc; ABI q16@0:8 */
uint64_t esign_scalar_0113(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYBookReaderDivision setIndex:] at 0x1001b4eec; ABI v24@0:8q16 */
void esign_scalar_0114(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYDownloadDataSource setCount:] at 0x1001c85d4; ABI v24@0:8q16 */
void esign_scalar_0115(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYDownloadDataSource autoImport] at 0x1001c8678; ABI B16@0:8 */
uint64_t esign_scalar_0116(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYDownloadDataSource autoDelete] at 0x1001c86a4; ABI B16@0:8 */
uint64_t esign_scalar_0117(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYArchive cancel] at 0x1001e4bdc; ABI B16@0:8 */
uint64_t esign_scalar_0118(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYArchive setCancel:] at 0x1001e4c10; ABI v20@0:8B16 */
void esign_scalar_0119(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYArchive needInputPassword] at 0x1001e4c30; ABI B16@0:8 */
uint64_t esign_scalar_0120(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYArchive setNeedInputPassword:] at 0x1001e4c5c; ABI v20@0:8B16 */
void esign_scalar_0121(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYArchive isAskPassword] at 0x1001e4c7c; ABI B16@0:8 */
uint64_t esign_scalar_0122(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return (value != 0);
}

/* -[YYYArchive setIsAskPassword:] at 0x1001e4ca4; ABI v20@0:8B16 */
void esign_scalar_0123(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYArchive type] at 0x1001e4960; ABI Q16@0:8 */
uint64_t esign_scalar_0124(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 40, sizeof value);
    return value;
}

/* -[YYYArchive setType:] at 0x1001e4974; ABI v24@0:8Q16 */
void esign_scalar_0125(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 40, &value, sizeof value);
}

/* -[YYYSignAppInfoModel setFileSize:] at 0x1002d1218; ABI v24@0:8Q16 */
void esign_scalar_0126(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 64, &value, sizeof value);
}

/* -[YYYTableViewSectionHelper section] at 0x1002f97b8; ABI q16@0:8 */
uint64_t esign_scalar_0127(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYTableViewSectionHelper setSection:] at 0x1002f97cc; ABI v24@0:8q16 */
void esign_scalar_0128(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYTableViewSectionHelper autoDeselectRow] at 0x1002f97ec; ABI B16@0:8 */
uint64_t esign_scalar_0129(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYTableViewSectionHelper setAutoDeselectRow:] at 0x1002f9814; ABI v20@0:8B16 */
void esign_scalar_0130(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYCertModel isEnterprise] at 0x10031e6dc; ABI B16@0:8 */
uint64_t esign_scalar_0131(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYCertModel setIsEnterprise:] at 0x10031e708; ABI v20@0:8B16 */
void esign_scalar_0132(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYSourceManager agreeDeal] at 0x100352020; ABI B16@0:8 */
uint64_t esign_scalar_0133(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYSourceManager setAgreeDeal:] at 0x10035204c; ABI v20@0:8B16 */
void esign_scalar_0134(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYSourceManager alwayDeleted] at 0x1003523f0; ABI B16@0:8 */
uint64_t esign_scalar_0135(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYSourceManager setAlwayDeleted:] at 0x1003523f8; ABI v20@0:8B16 */
void esign_scalar_0136(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYSourceManager fileState] at 0x10035240c; ABI Q16@0:8 */
uint64_t esign_scalar_0137(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 72, sizeof value);
    return value;
}

/* -[YYYSourceManager setFileState:] at 0x100352438; ABI v24@0:8Q16 */
void esign_scalar_0138(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 72, &value, sizeof value);
}

/* -[YYYSourceManager sortState] at 0x100352458; ABI Q16@0:8 */
uint64_t esign_scalar_0139(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 80, sizeof value);
    return value;
}

/* -[YYYSourceManager setSortState:] at 0x100352484; ABI v24@0:8Q16 */
void esign_scalar_0140(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 80, &value, sizeof value);
}

/* -[YYYSourceManager sortASC] at 0x1003524c0; ABI B16@0:8 */
uint64_t esign_scalar_0141(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYSourceManager setSortASC:] at 0x1003524e0; ABI v20@0:8B16 */
void esign_scalar_0142(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYSourceManager canUseTroll] at 0x1003526a0; ABI B16@0:8 */
uint64_t esign_scalar_0143(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 11, sizeof value);
    return (value != 0);
}

/* -[YYYSourceManager setCanUseTroll:] at 0x1003526c8; ABI v20@0:8B16 */
void esign_scalar_0144(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 11, &value, sizeof value);
}

/* -[YYYSourceManager canMDM] at 0x10035278c; ABI B16@0:8 */
uint64_t esign_scalar_0145(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return (value != 0);
}

/* -[YYYSourceManager setCanMDM:] at 0x1003527a8; ABI v20@0:8B16 */
void esign_scalar_0146(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYTableViewHelper autoDeselectRow] at 0x10038168c; ABI B16@0:8 */
uint64_t esign_scalar_0147(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYTableViewHelper setAutoDeselectRow:] at 0x1003816c0; ABI v20@0:8B16 */
void esign_scalar_0148(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYWebDAVManager timeout] at 0x1003868ec; ABI q16@0:8 */
uint64_t esign_scalar_0149(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYWebDAVManager setTimeout:] at 0x100386918; ABI v24@0:8q16 */
void esign_scalar_0150(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYModifyInfo removeMinimumOSVersion] at 0x1003cddf0; ABI B16@0:8 */
uint64_t esign_scalar_0151(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYModifyInfo setRemoveMinimumOSVersion:] at 0x1003cde1c; ABI v20@0:8B16 */
void esign_scalar_0152(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYModifyInfo removeUISupportedDevices] at 0x1003cde3c; ABI B16@0:8 */
uint64_t esign_scalar_0153(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYModifyInfo setRemoveUISupportedDevices:] at 0x1003cde64; ABI v20@0:8B16 */
void esign_scalar_0154(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYModifyInfo fixJb] at 0x1003cde90; ABI B16@0:8 */
uint64_t esign_scalar_0155(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYModifyInfo setFixJb:] at 0x1003cdea4; ABI v20@0:8B16 */
void esign_scalar_0156(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYModifyInfo addUISupportsDocumentBrowser] at 0x1003cded4; ABI B16@0:8 */
uint64_t esign_scalar_0157(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 11, sizeof value);
    return value;
}

/* -[YYYModifyInfo setAddUISupportsDocumentBrowser:] at 0x1003cdee8; ABI v20@0:8B16 */
void esign_scalar_0158(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 11, &value, sizeof value);
}

/* -[YYYModifyInfo removeURLScheme] at 0x1003cdf08; ABI B16@0:8 */
uint64_t esign_scalar_0159(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return value;
}

/* -[YYYModifyInfo setRemoveURLScheme:] at 0x1003cdf28; ABI v20@0:8B16 */
void esign_scalar_0160(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYModifyInfo injectPath] at 0x1003cdf54; ABI Q16@0:8 */
uint64_t esign_scalar_0161(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 88, sizeof value);
    return value;
}

/* -[YYYModifyInfo setInjectPath:] at 0x1003cdf74; ABI v24@0:8Q16 */
void esign_scalar_0162(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 88, &value, sizeof value);
}

/* -[YYYModifyInfo injectFolder] at 0x1003cdf94; ABI Q16@0:8 */
uint64_t esign_scalar_0163(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 96, sizeof value);
    return value;
}

/* -[YYYModifyInfo setInjectFolder:] at 0x1003cdfc4; ABI v24@0:8Q16 */
void esign_scalar_0164(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 96, &value, sizeof value);
}

/* -[YYYEntitlementValue type] at 0x10070bf70; ABI C16@0:8 */
uint64_t esign_scalar_0165(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYEntitlementValue setType:] at 0x10070bf9c; ABI v20@0:8C16 */
void esign_scalar_0166(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYEntitlementValue length] at 0x10070c0a8; ABI C16@0:8 */
uint64_t esign_scalar_0167(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYEntitlementValue setLength:] at 0x10070c0d4; ABI v20@0:8C16 */
void esign_scalar_0168(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYEntitlementBlob padding] at 0x10070cf0c; ABI C16@0:8 */
uint64_t esign_scalar_0169(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYEntitlementBlob setPadding:] at 0x10070cf2c; ABI v20@0:8C16 */
void esign_scalar_0170(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYEntitlementBlob length] at 0x10070cf4c; ABI C16@0:8 */
uint64_t esign_scalar_0171(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYEntitlementBlob setLength:] at 0x10070cf6c; ABI v20@0:8C16 */
void esign_scalar_0172(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYEntitlementBlob isArray] at 0x10070d050; ABI B16@0:8 */
uint64_t esign_scalar_0173(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return (value != 0);
}

/* -[YYYEntitlementBlob setIsArray:] at 0x10070d078; ABI v20@0:8B16 */
void esign_scalar_0174(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYEntitlementsSuperBlob magic] at 0x10070dc14; ABI I16@0:8 */
uint64_t esign_scalar_0175(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return value;
}

/* -[YYYEntitlementsSuperBlob setMagic:] at 0x10070dc44; ABI v20@0:8I16 */
void esign_scalar_0176(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYEntitlementsSuperBlob length] at 0x10070dc70; ABI I16@0:8 */
uint64_t esign_scalar_0177(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return value;
}

/* -[YYYEntitlementsSuperBlob setLength:] at 0x10070dc84; ABI v20@0:8I16 */
void esign_scalar_0178(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYEntitlementsSuperBlob byte1] at 0x10070dca4; ABI C16@0:8 */
uint64_t esign_scalar_0179(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYEntitlementsSuperBlob setByte1:] at 0x10070dcb8; ABI v20@0:8C16 */
void esign_scalar_0180(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYEntitlementsSuperBlob byte2] at 0x10070dcd8; ABI C16@0:8 */
uint64_t esign_scalar_0181(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return value;
}

/* -[YYYEntitlementsSuperBlob setByte2:] at 0x10070dcec; ABI v20@0:8C16 */
void esign_scalar_0182(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYEntitlementsSuperBlob blobsLength] at 0x10070dcf4; ABI S16@0:8 */
uint64_t esign_scalar_0183(const void *object, uintptr_t selector) {
    (void)selector; uint16_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYEntitlementsSuperBlob setBlobsLength:] at 0x10070dd14; ABI v20@0:8S16 */
void esign_scalar_0184(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint16_t value = (uint16_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYMachO thin] at 0x1007190a4; ABI B16@0:8 */
uint64_t esign_scalar_0185(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYMachO setThin:] at 0x1007190b8; ABI v20@0:8B16 */
void esign_scalar_0186(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYMobileprovision provisionsAllDevices] at 0x10071bf88; ABI B16@0:8 */
uint64_t esign_scalar_0187(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYMobileprovision setProvisionsAllDevices:] at 0x10071bfb4; ABI v20@0:8B16 */
void esign_scalar_0188(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYP12 isP12Data] at 0x100739760; ABI B16@0:8 */
uint64_t esign_scalar_0189(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 32, sizeof value);
    return value;
}

/* -[YYYP12 setIsP12Data:] at 0x100739774; ABI v20@0:8B16 */
void esign_scalar_0190(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 32, &value, sizeof value);
}

/* -[YYYBundle isFramework] at 0x100745524; ABI B16@0:8 */
uint64_t esign_scalar_0191(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYBundle setIsFramework:] at 0x10074554c; ABI v20@0:8B16 */
void esign_scalar_0192(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYBundle isReadOnly] at 0x100745c78; ABI B16@0:8 */
uint64_t esign_scalar_0193(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYBundle setIsReadOnly:] at 0x100745ca0; ABI v20@0:8B16 */
void esign_scalar_0194(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYBundle thin] at 0x100745ccc; ABI B16@0:8 */
uint64_t esign_scalar_0195(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYBundle setThin:] at 0x100745cec; ABI v20@0:8B16 */
void esign_scalar_0196(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYSignAsset mergeEntitlements] at 0x10075e0a4; ABI B16@0:8 */
uint64_t esign_scalar_0197(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYSignAsset setMergeEntitlements:] at 0x10075e0c4; ABI v20@0:8B16 */
void esign_scalar_0198(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYSignAsset removeEmbedded] at 0x10075e0f0; ABI B16@0:8 */
uint64_t esign_scalar_0199(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 9, sizeof value);
    return (value != 0);
}

/* -[YYYSignAsset setRemoveEmbedded:] at 0x10075e124; ABI v20@0:8B16 */
void esign_scalar_0200(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 9, &value, sizeof value);
}

/* -[YYYSignAsset useBugSign] at 0x10075e138; ABI B16@0:8 */
uint64_t esign_scalar_0201(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 10, sizeof value);
    return value;
}

/* -[YYYSignAsset setUseBugSign:] at 0x10075e164; ABI v20@0:8B16 */
void esign_scalar_0202(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 10, &value, sizeof value);
}

/* -[YYYOffsetNode offset] at 0x100762dec; ABI q16@0:8 */
uint64_t esign_scalar_0203(const void *object, uintptr_t selector) {
    (void)selector; uint64_t value;
    memcpy(&value, (const unsigned char *)object + 16, sizeof value);
    return value;
}

/* -[YYYOffsetNode setOffset:] at 0x100762e0c; ABI v24@0:8q16 */
void esign_scalar_0204(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint64_t value = (uint64_t)argument;
    memcpy((unsigned char *)object + 16, &value, sizeof value);
}

/* -[YYYOffsetNode shouldSwap] at 0x100762e38; ABI B16@0:8 */
uint64_t esign_scalar_0205(const void *object, uintptr_t selector) {
    (void)selector; uint8_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return (value != 0);
}

/* -[YYYOffsetNode setShouldSwap:] at 0x100762e6c; ABI v20@0:8B16 */
void esign_scalar_0206(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint8_t value = (uint8_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYBlob magic] at 0x100772780; ABI I16@0:8 */
uint64_t esign_scalar_0207(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYBlob setMagic:] at 0x1007727a0; ABI v20@0:8I16 */
void esign_scalar_0208(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYBlobIndex type] at 0x100772c08; ABI I16@0:8 */
uint64_t esign_scalar_0209(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYBlobIndex setType:] at 0x100772c28; ABI v20@0:8I16 */
void esign_scalar_0210(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}

/* -[YYYBlobIndex offset] at 0x100772c58; ABI I16@0:8 */
uint64_t esign_scalar_0211(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 12, sizeof value);
    return value;
}

/* -[YYYBlobIndex setOffset:] at 0x100772c78; ABI v20@0:8I16 */
void esign_scalar_0212(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 12, &value, sizeof value);
}

/* -[YYYSuperBlob magic] at 0x1007745fc; ABI I16@0:8 */
uint64_t esign_scalar_0213(const void *object, uintptr_t selector) {
    (void)selector; uint32_t value;
    memcpy(&value, (const unsigned char *)object + 8, sizeof value);
    return value;
}

/* -[YYYSuperBlob setMagic:] at 0x100774628; ABI v20@0:8I16 */
void esign_scalar_0214(void *object, uintptr_t selector, uint64_t argument) {
    (void)selector; uint32_t value = (uint32_t)argument;
    memcpy((unsigned char *)object + 8, &value, sizeof value);
}
