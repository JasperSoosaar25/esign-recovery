// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81260
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYMapViewController : QMUICommonViewController
// ivar _setupZoomLeve encoding=B offset=16
// ivar _showSearch encoding=B offset=17
// ivar _locationManager encoding=@"CLLocationManager" offset=24
// ivar _mapView encoding=@"MKMapView" offset=32
// ivar _searchView encoding=@"YYYMapSearchView" offset=40
// ivar _searchRequest encoding=@"MKLocalSearchRequest" offset=48
// ivar _longPressGes encoding=@"UILongPressGestureRecognizer" offset=56
// ivar _currentLocationButton encoding=@"UIButton" offset=64
// property locationManager attributes=T@"CLLocationManager",&,N,V_locationManager
// property mapView attributes=T@"MKMapView",&,N,V_mapView
// property setupZoomLeve attributes=TB,N,V_setupZoomLeve
// property searchView attributes=T@"YYYMapSearchView",&,N,V_searchView
// property showSearch attributes=TB,N,V_showSearch
// property searchRequest attributes=T@"MKLocalSearchRequest",&,N,V_searchRequest
// property longPressGes attributes=T@"UILongPressGestureRecognizer",&,N,V_longPressGes
// property currentLocationButton attributes=T@"UIButton",&,N,V_currentLocationButton
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100359060 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1003594e4 | v16@0:8
- (void)cleanChange;
// IMP 0x100359724 | @32@0:8@16@24
- (id)mapView:(id)arg0 viewForAnnotation:(id)arg1;
// IMP 0x10035a314 | v32@0:8@16@24
- (void)mapView:(id)arg0 didUpdateUserLocation:(id)arg1;
// IMP 0x10035a4d0 | {?={CLLocationCoordinate2D=dd}{?=dd}}40@0:8{CLLocationCoordinate2D=dd}16d32
- (void * /* aggregate ? */)createViewableRegionForLocation:(struct CLLocationCoordinate2D)arg0 andDistance:(double)arg1;
// IMP 0x10035a500 | v16@0:8
- (void)localSearch;
// IMP 0x10035aab4 | B24@0:8@16
- (BOOL)searchBarShouldBeginEditing:(id)arg0;
// IMP 0x10035ab10 | v24@0:8@16
- (void)searchBarCancelButtonClicked:(id)arg0;
// IMP 0x10035abdc | v24@0:8@16
- (void)searchBarSearchButtonClicked:(id)arg0;
// IMP 0x10035ac70 | v32@0:8@16@24
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
// IMP 0x10035aeb0 | v20@0:8B16
- (void)setShowSearch:(BOOL)arg0;
// IMP 0x10035b244 | v24@0:8@16
- (void)longPressGesHandle:(id)arg0;
// IMP 0x10035b708 | v16@0:8
- (void)currentLocationButtonHandle;
// IMP 0x10035b7e4 | v16@0:8
- (void)loadSubviews;
// IMP 0x10035c708 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x10035cf24 | @16@0:8
- (id)searchRequest;
// IMP 0x10035d06c | @16@0:8
- (id)locationManager;
// IMP 0x10035d0a0 | v24@0:8@16
- (void)setLocationManager:(id)arg0;
// IMP 0x10035d138 | @16@0:8
- (id)mapView;
// IMP 0x10035d160 | v24@0:8@16
- (void)setMapView:(id)arg0;
// IMP 0x10035d1d0 | B16@0:8
- (BOOL)setupZoomLeve;
// IMP 0x10035d1f8 | v20@0:8B16
- (void)setSetupZoomLeve:(BOOL)arg0;
// IMP 0x10035d214 | @16@0:8
- (id)searchView;
// IMP 0x10035d24c | v24@0:8@16
- (void)setSearchView:(id)arg0;
// IMP 0x10035d2bc | B16@0:8
- (BOOL)showSearch;
// IMP 0x10035d2f8 | v24@0:8@16
- (void)setSearchRequest:(id)arg0;
// IMP 0x10035d35c | @16@0:8
- (id)longPressGes;
// IMP 0x10035d384 | v24@0:8@16
- (void)setLongPressGes:(id)arg0;
// IMP 0x10035d3f0 | @16@0:8
- (id)currentLocationButton;
// IMP 0x10035d40c | v24@0:8@16
- (void)setCurrentLocationButton:(id)arg0;
// IMP 0x10035d450 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
