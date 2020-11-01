/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate, MNNavigationServiceObserver> {
    GEOSharedNavState * _currentState;
    <MSPNavigationListenerDelegate> * _delegate;
    GEONavigationGuidanceState * _guidanceState;
    NSString * _navigationSessionIdentifier;
    GEONavigationListener * _outOfNavListener;
    GEOSharedNavState * _state;
    NSObject<OS_os_transaction> * _transaction;
    bool  _transitioningToNavigationState;
}

@property (nonatomic, retain) GEOSharedNavState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPNavigationListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCompatibleNavigationType;
@property (nonatomic, readonly) bool isCompatibleTransportType;
@property (nonatomic, readonly) bool isInNavigatingState;
@property (nonatomic, readonly, copy) NSString *navigationSessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initState;
- (int)_referenceFrameForDestination:(id)arg1;
- (void)_updateETA:(id)arg1 remainingDistance:(id)arg2;
- (void)_updateLocation:(id)arg1;
- (void)_updateNavigationServiceForCurrentState;
- (void)_updateRoute:(id)arg1;
- (void)_updateTraffic:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isCompatibleNavigationType;
- (bool)isCompatibleTransportType;
- (bool)isInNavigatingState;
- (void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2;
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)navigationSessionIdentifier;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;

@end