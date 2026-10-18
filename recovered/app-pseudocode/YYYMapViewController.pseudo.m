/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMapViewController | class address: 0x100c81260
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMapViewController viewDidLoad] | 0x100359060 | ABI v16@0:8 */

/* Address: 0x100359060 | YYYMapViewController::YYYMapViewController__instance__viewDidLoad | bytes: 44 */

/* Recovered runtime selector: -[YYYMapViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__viewDidLoad(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100359088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc0b70)();
  return;
}



/* -[YYYMapViewController cleanChange] | 0x1003594e4 | ABI v16@0:8 */

/* Address: 0x1003594e4 | YYYMapViewController::YYYMapViewController__instance__cleanChange | bytes: 36 */

/* Recovered runtime selector: -[YYYMapViewController cleanChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__cleanChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100359504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dc0d28)();
  return;
}



/* -[YYYMapViewController mapView:viewForAnnotation:] | 0x100359724 | ABI @32@0:8@16@24 */

/* Address: 0x100359724 | YYYMapViewController::YYYMapViewController__instance__mapView_viewForAnnotation_ | bytes: 60 */

/* Recovered runtime selector: -[YYYMapViewController mapView:viewForAnnotation:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__mapView_viewForAnnotation_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc0e00)(DAT_100e922e0);
  return IVar1;
}



/* -[YYYMapViewController mapView:didUpdateUserLocation:] | 0x10035a314 | ABI v32@0:8@16@24 */

/* Address: 0x10035a314 | YYYMapViewController::YYYMapViewController__instance__mapView_didUpdateUserLocation_ | bytes: 44 */

/* Recovered runtime selector: -[YYYMapViewController mapView:didUpdateUserLocation:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__mapView_didUpdateUserLocation_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010035a33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1070)();
  return;
}



/* -[YYYMapViewController createViewableRegionForLocation:andDistance:] | 0x10035a4d0 | ABI {?={CLLocationCoordinate2D=dd}{?=dd}}40@0:8{CLLocationCoordinate2D=dd}16d32 */

/* Address: 0x10035a4d0 | YYYMapViewController::YYYMapViewController__instance__createViewableRegionForLocation_andDistance_ | bytes: 20 */

/* Recovered runtime selector: -[YYYMapViewController createViewableRegionForLocation:andDistance:]
   Original ABI encoding:
   {?={CLLocationCoordinate2D=dd}{?=dd}}40@0:8{CLLocationCoordinate2D=dd}16d32
   Metadata-derived name; original source file and argument names are unavailable. */

CGRect YYYMapViewController::
       YYYMapViewController__instance__createViewableRegionForLocation_andDistance_
                 (ID param_1,SEL param_2,CLLocationCoordinate2D param_3,double param_4)

{
  double dVar1;
  double in_d3;
  CGRect CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x00010035a4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0.field0_0x0 = (double)(*(code *)PTR_LAB_100dc1128)(param_3.field0_0x0);
  CVar2.field0_0x0.field1_0x8 = dVar1;
  CVar2.field1_0x10.field1_0x8 = in_d3;
  CVar2.field1_0x10.field0_0x0 = param_4;
  return CVar2;
}



/* -[YYYMapViewController localSearch] | 0x10035a500 | ABI v16@0:8 */

/* Address: 0x10035a500 | YYYMapViewController::YYYMapViewController__instance__localSearch | bytes: 44 */

/* Recovered runtime selector: -[YYYMapViewController localSearch]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__localSearch(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010035a528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1140)();
  return;
}



/* -[YYYMapViewController searchBarShouldBeginEditing:] | 0x10035aab4 | ABI B24@0:8@16 */

/* Address: 0x10035aab4 | YYYMapViewController::YYYMapViewController__instance__searchBarShouldBeginEditing_ | bytes: 28 */

/* Recovered runtime selector: -[YYYMapViewController searchBarShouldBeginEditing:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapViewController::YYYMapViewController__instance__searchBarShouldBeginEditing_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035aacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dc12a8)((int)param_1);
  return bVar1;
}



/* -[YYYMapViewController searchBarCancelButtonClicked:] | 0x10035ab10 | ABI v24@0:8@16 */

/* Address: 0x10035ab10 | YYYMapViewController::YYYMapViewController__instance__searchBarCancelButtonClicked_ | bytes: 32 */

/* Recovered runtime selector: -[YYYMapViewController searchBarCancelButtonClicked:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__searchBarCancelButtonClicked_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc12d8)();
  return;
}



/* -[YYYMapViewController searchBarSearchButtonClicked:] | 0x10035abdc | ABI v24@0:8@16 */

/* Address: 0x10035abdc | YYYMapViewController::YYYMapViewController__instance__searchBarSearchButtonClicked_ | bytes: 80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapViewController searchBarSearchButtonClicked:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__searchBarSearchButtonClicked_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  objc_stub::text(param_3);
  IVar1 = objc_stub::FUN_10095e0c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010035ac28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1310)(IVar1);
  return;
}



/* -[YYYMapViewController searchBar:textDidChange:] | 0x10035ac70 | ABI v32@0:8@16@24 */

/* Address: 0x10035ac70 | YYYMapViewController::YYYMapViewController__instance__searchBar_textDidChange_ | bytes: 44 */

/* Recovered runtime selector: -[YYYMapViewController searchBar:textDidChange:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__searchBar_textDidChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010035ac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1320)();
  return;
}



/* -[YYYMapViewController setShowSearch:] | 0x10035aeb0 | ABI v20@0:8B16 */

/* Address: 0x10035aeb0 | YYYMapViewController::YYYMapViewController__instance__setShowSearch_ | bytes: 52 */

/* Recovered runtime selector: -[YYYMapViewController setShowSearch:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setShowSearch_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035aee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1400)(param_1,param_2,param_3);
  return;
}



/* -[YYYMapViewController longPressGesHandle:] | 0x10035b244 | ABI v24@0:8@16 */

/* Address: 0x10035b244 | YYYMapViewController::YYYMapViewController__instance__longPressGesHandle_ | bytes: 52 */

/* Recovered runtime selector: -[YYYMapViewController longPressGesHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__longPressGesHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1528)();
  return;
}



/* -[YYYMapViewController currentLocationButtonHandle] | 0x10035b708 | ABI v16@0:8 */

/* Address: 0x10035b708 | YYYMapViewController::YYYMapViewController__instance__currentLocationButtonHandle | bytes: 52 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapViewController currentLocationButtonHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__currentLocationButtonHandle
               (ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::mapView(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010035b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc16a0)(IVar1);
  return;
}



/* -[YYYMapViewController loadSubviews] | 0x10035b7e4 | ABI v16@0:8 */

/* Address: 0x10035b7e4 | YYYMapViewController::YYYMapViewController__instance__loadSubviews | bytes: 56 */

/* Recovered runtime selector: -[YYYMapViewController loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010035b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc16b8)();
  return;
}



/* -[YYYMapViewController viewDidLayoutSubviews] | 0x10035c708 | ABI v16@0:8 */

/* Address: 0x10035c708 | YYYMapViewController::YYYMapViewController__instance__viewDidLayoutSubviews | bytes: 64 */

/* Recovered runtime selector: -[YYYMapViewController viewDidLayoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010035c744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1a50)();
  return;
}



/* -[YYYMapViewController searchRequest] | 0x10035cf24 | ABI @16@0:8 */

/* Address: 0x10035cf24 | YYYMapViewController::YYYMapViewController__instance__searchRequest | bytes: 32 */

/* Recovered runtime selector: -[YYYMapViewController searchRequest]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__searchRequest(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035cf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1c48)();
  return IVar1;
}



/* -[YYYMapViewController locationManager] | 0x10035d06c | ABI @16@0:8 */

/* Address: 0x10035d06c | YYYMapViewController::YYYMapViewController__instance__locationManager | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController locationManager]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__locationManager(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1cf8)();
  return IVar1;
}



/* -[YYYMapViewController setLocationManager:] | 0x10035d0a0 | ABI v24@0:8@16 */

/* Address: 0x10035d0a0 | YYYMapViewController::YYYMapViewController__instance__setLocationManager_ | bytes: 48 */

/* Recovered runtime selector: -[YYYMapViewController setLocationManager:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setLocationManager_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1d28)();
  return;
}



/* -[YYYMapViewController mapView] | 0x10035d138 | ABI @16@0:8 */

/* Address: 0x10035d138 | YYYMapViewController::YYYMapViewController__instance__mapView | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController mapView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__mapView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1d70)();
  return IVar1;
}



/* -[YYYMapViewController setMapView:] | 0x10035d160 | ABI v24@0:8@16 */

/* Address: 0x10035d160 | YYYMapViewController::YYYMapViewController__instance__setMapView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMapViewController setMapView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setMapView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1d90)();
  return;
}



/* -[YYYMapViewController setupZoomLeve] | 0x10035d1d0 | ABI B16@0:8 */

/* Address: 0x10035d1d0 | YYYMapViewController::YYYMapViewController__instance__setupZoomLeve | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController setupZoomLeve]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapViewController::YYYMapViewController__instance__setupZoomLeve(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dc1dc0)((int)param_1);
  return bVar1;
}



/* -[YYYMapViewController setSetupZoomLeve:] | 0x10035d1f8 | ABI v20@0:8B16 */

/* Address: 0x10035d1f8 | YYYMapViewController::YYYMapViewController__instance__setSetupZoomLeve_ | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController setSetupZoomLeve:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setSetupZoomLeve_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1dd8)(param_1,param_2,param_3);
  return;
}



/* -[YYYMapViewController searchView] | 0x10035d214 | ABI @16@0:8 */

/* Address: 0x10035d214 | YYYMapViewController::YYYMapViewController__instance__searchView | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController searchView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__searchView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1de8)();
  return IVar1;
}



/* -[YYYMapViewController setSearchView:] | 0x10035d24c | ABI v24@0:8@16 */

/* Address: 0x10035d24c | YYYMapViewController::YYYMapViewController__instance__setSearchView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYMapViewController setSearchView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setSearchView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1e20)();
  return;
}



/* -[YYYMapViewController showSearch] | 0x10035d2bc | ABI B16@0:8 */

/* Address: 0x10035d2bc | YYYMapViewController::YYYMapViewController__instance__showSearch | bytes: 20 */

/* Recovered runtime selector: -[YYYMapViewController showSearch]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapViewController::YYYMapViewController__instance__showSearch(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dc1e58)((long)_showSearch,(int)param_1);
  return bVar1;
}



/* -[YYYMapViewController setSearchRequest:] | 0x10035d2f8 | ABI v24@0:8@16 */

/* Address: 0x10035d2f8 | YYYMapViewController::YYYMapViewController__instance__setSearchRequest_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMapViewController setSearchRequest:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setSearchRequest_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1e90)((long)_searchRequest);
  return;
}



/* -[YYYMapViewController longPressGes] | 0x10035d35c | ABI @16@0:8 */

/* Address: 0x10035d35c | YYYMapViewController::YYYMapViewController__instance__longPressGes | bytes: 20 */

/* Recovered runtime selector: -[YYYMapViewController longPressGes]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__longPressGes(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1eb8)((long)_longPressGes);
  return IVar1;
}



/* -[YYYMapViewController setLongPressGes:] | 0x10035d384 | ABI v24@0:8@16 */

/* Address: 0x10035d384 | YYYMapViewController::YYYMapViewController__instance__setLongPressGes_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMapViewController setLongPressGes:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setLongPressGes_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1ee0)();
  return;
}



/* -[YYYMapViewController currentLocationButton] | 0x10035d3f0 | ABI @16@0:8 */

/* Address: 0x10035d3f0 | YYYMapViewController::YYYMapViewController__instance__currentLocationButton | bytes: 12 */

/* Recovered runtime selector: -[YYYMapViewController currentLocationButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapViewController::YYYMapViewController__instance__currentLocationButton
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010035d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc1f10)();
  return IVar1;
}



/* -[YYYMapViewController setCurrentLocationButton:] | 0x10035d40c | ABI v24@0:8@16 */

/* Address: 0x10035d40c | YYYMapViewController::YYYMapViewController__instance__setCurrentLocationButton_ | bytes: 28 */

/* Recovered runtime selector: -[YYYMapViewController setCurrentLocationButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance__setCurrentLocationButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1f18)();
  return;
}



/* -[YYYMapViewController .cxx_destruct] | 0x10035d450 | ABI v16@0:8 */

/* Address: 0x10035d450 | YYYMapViewController::YYYMapViewController__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYMapViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapViewController::YYYMapViewController__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010035d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc1f28)();
  return;
}


