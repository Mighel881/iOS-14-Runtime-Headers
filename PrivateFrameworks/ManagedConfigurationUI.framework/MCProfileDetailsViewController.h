/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileDetailsViewController : MCUITableViewController {
    MCUIProfile * _UIProfile;
    int  _mode;
    NSArray * _sections;
    bool  _showTitleIfOnlyOneSection;
    double  _tableViewBottomInset;
    bool  _viewControllerCanPop;
}

@property (nonatomic, retain) MCUIProfile *UIProfile;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) bool showTitleIfOnlyOneSection;
@property (nonatomic) double tableViewBottomInset;
@property (nonatomic) bool viewControllerCanPop;

- (void).cxx_destruct;
- (id)UIProfile;
- (void)_profileChanged:(id)arg1;
- (void)_setup;
- (void)_updateStateForCurrentMode;
- (id)initWithStyle:(long long)arg1;
- (int)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSectionArray;
- (id)sections;
- (void)setMode:(int)arg1;
- (void)setProfileDetailsMode:(int)arg1;
- (void)setSections:(id)arg1;
- (void)setShowTitleIfOnlyOneSection:(bool)arg1;
- (void)setTableViewBottomInset:(double)arg1;
- (void)setUIProfile:(id)arg1;
- (void)setUIProfile:(id)arg1 mode:(int)arg2;
- (void)setViewControllerCanPop:(bool)arg1;
- (bool)showTitleIfOnlyOneSection;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableViewBottomInset;
- (bool)viewControllerCanPop;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
