/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICellularUsageLayoutGroup : NSObject <Loggable> {
    <PSBillingPeriodSelectorSpecifierDelegate> * _billingCycleDelegate;
    PSUICallTimeGroup * _callTimeGroup;
    PSUICarrierSpaceManager * _carrierSpaceManager;
    NSString * _groupSpecifierTitle;
    PSListController * _hostController;
    Logger * _logger;
    PSCellularManagementCache * _managementCache;
    <PSAppCellularUsageSpecifierDelegate> * _policySpecifierDelegate;
    <PSUIResetStatisticsGroupDelegate> * _resetStatisticsDelegate;
    PSUIResetStatisticsGroup * _resetStatisticsGroup;
    PSUICellularUsageContentSpecifiers * _savedContentSpecifiers;
    NSArray * _savedHeaderSpecifiers;
    PSDataUsageStatisticsCache * _statisticsCache;
    PSUITotalCellularUsageSubgroup * _totalUsageSubgroup;
}

@property (nonatomic) <PSBillingPeriodSelectorSpecifierDelegate> *billingCycleDelegate;
@property (nonatomic, retain) PSUICallTimeGroup *callTimeGroup;
@property (nonatomic, retain) PSUICarrierSpaceManager *carrierSpaceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *groupSpecifierTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSCellularManagementCache *managementCache;
@property (nonatomic) <PSAppCellularUsageSpecifierDelegate> *policySpecifierDelegate;
@property (nonatomic) <PSUIResetStatisticsGroupDelegate> *resetStatisticsDelegate;
@property (nonatomic, retain) PSUIResetStatisticsGroup *resetStatisticsGroup;
@property (retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers;
@property (retain) NSArray *savedHeaderSpecifiers;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSUITotalCellularUsageSubgroup *totalUsageSubgroup;

- (void).cxx_destruct;
- (id)billingCycleDelegate;
- (id)callTimeGroup;
- (id)carrierSpaceManager;
- (id)contentSpecifiers;
- (id)getLogger;
- (id)groupSpecifierTitle;
- (id)headerSpecifiers;
- (id)hostController;
- (id)initWithGroupSpecifierTitle:(id)arg1 hostController:(id)arg2 managementCache:(id)arg3 statisticsCache:(id)arg4 carrierSpaceManager:(id)arg5 billingCycleDelegate:(id)arg6 policySpecifierDelegate:(id)arg7 resetStatisticsDelegate:(id)arg8;
- (id)managementCache;
- (id)policySpecifierDelegate;
- (void)refreshOrderingOfContentSpecifiers;
- (id)resetStatisticsDelegate;
- (id)resetStatisticsGroup;
- (id)savedContentSpecifiers;
- (id)savedHeaderSpecifiers;
- (void)setBillingCycleDelegate:(id)arg1;
- (void)setCallTimeGroup:(id)arg1;
- (void)setCarrierSpaceManager:(id)arg1;
- (void)setGroupSpecifierTitle:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setManagementCache:(id)arg1;
- (void)setPolicySpecifierDelegate:(id)arg1;
- (void)setResetStatisticsDelegate:(id)arg1;
- (void)setResetStatisticsGroup:(id)arg1;
- (void)setSavedContentSpecifiers:(id)arg1;
- (void)setSavedHeaderSpecifiers:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (void)setTotalUsageSubgroup:(id)arg1;
- (id)statisticsCache;
- (id)totalUsageSubgroup;

@end
