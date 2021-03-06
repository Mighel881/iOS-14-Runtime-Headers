/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {
    <MapsSuggestionsVirtualGarageConnector> * _connector;
    MapsSuggestionsObservers * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)closeConnection;
- (bool)entriesForUnpairedVehiclesWithHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithConnector:(id)arg1;
- (void)openConnection;
- (void)removeObserver:(id)arg1;
- (void)stateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)virtualGarageDidUpdateUnpairedVehicles:(id)arg1;

@end
