/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFIPViewController : WFInsetTableViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _addresses;
    NSArray * _prefixes;
    bool  _useInsetGroupedTableView;
}

@property (nonatomic, retain) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *prefixes;
@property (readonly) Class superclass;
@property (nonatomic) bool useInsetGroupedTableView;

- (void).cxx_destruct;
- (id)addresses;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 useInsetGroupedTableView:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prefixes;
- (void)setAddresses:(id)arg1;
- (void)setPrefixes:(id)arg1;
- (void)setUseInsetGroupedTableView:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)useInsetGroupedTableView;
- (void)viewDidLoad;

@end