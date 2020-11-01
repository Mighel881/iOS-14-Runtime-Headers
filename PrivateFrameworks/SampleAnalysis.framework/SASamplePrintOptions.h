/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SASamplePrintOptions : NSObject <NSCopying> {
    bool  _aggregateFramesByOffsetIntoBinary;
    bool  _aggregateProcessesByExecutable;
    bool  _aggregateStacksByProcess;
    bool  _aggregateStacksByThread;
    bool  _binaryImagesBeforeStacks;
    bool  _displayAddressesInBlockedReasons;
    bool  _displayAllBinaries;
    bool  _displayAllHIDEvents;
    bool  _displayAllTaskSizeChanges;
    bool  _displayBinaryImageAddresses;
    bool  _displayBinaryImagesLackingNameOrPath;
    bool  _displayBlockedReasons;
    bool  _displayBlockedReasonsLackingProcessOwners;
    bool  _displayBlockedThreads;
    bool  _displayBody;
    bool  _displayCPUNumForNonRunningThreads;
    bool  _displayCPUNumForRunningThreads;
    bool  _displayDetailedCpuTime;
    bool  _displayDetailedWallTime;
    bool  _displayEmptyBootArgs;
    bool  _displayFooter;
    bool  _displayFrameAddresses;
    bool  _displayFullSourcePaths;
    bool  _displayHeader;
    bool  _displayIdleWorkQueueThreads;
    bool  _displayOffsetsFromUnnamedSymbols;
    bool  _displayRunnableThreads;
    bool  _displayRunningThreads;
    bool  _displayStacksWithZeroCount;
    bool  _displaySymbolInformation;
    bool  _displayTasksWithZeroCount;
    bool  _displayThreadRunningState;
    bool  _forceOneBasedTimeIndexes;
    bool  _includeUserIdleAndBatteryStateInStacks;
    bool  _microstackshotsFormat;
    long long  _omitFramesAfterLineCount;
    BOOL  _omitFramesBelowPercentOfStackSamples;
    long long  _omitFramesBelowSampleCount;
    int  _omitStacksAboveBasePriority;
    int  _omitStacksBelowBasePriority;
    BOOL  _omitStacksBelowPercentOfTaskSamples;
    long long  _omitStacksBelowSampleCount;
    bool  _omitStacksOnAC;
    bool  _omitStacksOnBattery;
    bool  _omitStacksWithUserActive;
    bool  _omitStacksWithUserIdle;
    BOOL  _omitTasksBelowPercentOfTotalSamples;
    long long  _omitTasksBelowSampleCount;
    bool  _orderTasksBySampleCount;
    bool  _patchTruncatedStacks;
    NSSet * _pidsToPrint;
    bool  _printHeavyStacks;
    bool  _printJson;
    bool  _printSpinSignatureStack;
    bool  _printTargetHIDEvent;
    bool  _printTargetThreadOnly;
    NSSet * _processNamesToPrint;
    NSSet * _processUUIDsToPrint;
    bool  _showThreadStateAsLeafFrame;
    bool  _systemstatsFormat;
    bool  _tabDelineateBinaryImageSections;
    NSSet * _tidsToPrint;
    NSSet * _uniquePidsToPrint;
}

@property bool aggregateFramesByOffsetIntoBinary;
@property bool aggregateProcessesByExecutable;
@property bool aggregateStacksByProcess;
@property bool aggregateStacksByThread;
@property bool binaryImagesBeforeStacks;
@property bool displayAddressesInBlockedReasons;
@property bool displayAllBinaries;
@property bool displayAllHIDEvents;
@property bool displayAllTaskSizeChanges;
@property bool displayBinaryImageAddresses;
@property bool displayBinaryImagesLackingNameOrPath;
@property bool displayBlockedReasons;
@property bool displayBlockedReasonsLackingProcessOwners;
@property bool displayBlockedThreads;
@property bool displayBody;
@property bool displayCPUNumForNonRunningThreads;
@property bool displayCPUNumForRunningThreads;
@property bool displayDetailedCpuTime;
@property bool displayDetailedWallTime;
@property bool displayEmptyBootArgs;
@property bool displayFooter;
@property bool displayFrameAddresses;
@property bool displayFullSourcePaths;
@property bool displayHeader;
@property bool displayIdleWorkQueueThreads;
@property bool displayOffsetsFromUnnamedSymbols;
@property bool displayProcessFirstLastTimes;
@property bool displayRunnableThreads;
@property bool displayRunningThreads;
@property bool displayStacksWithZeroCount;
@property bool displaySub1MsCpuTime;
@property bool displaySymbolInformation;
@property bool displayTasksWithZeroCount;
@property bool displayThreadRunningState;
@property bool forceOneBasedTimeIndexes;
@property bool includeUserIdleAndBatteryStateInStacks;
@property bool microstackshotsFormat;
@property long long omitFramesAfterLineCount;
@property BOOL omitFramesBelowPercentOfStackSamples;
@property long long omitFramesBelowSampleCount;
@property int omitStacksAboveBasePriority;
@property int omitStacksBelowBasePriority;
@property BOOL omitStacksBelowPercentOfTaskSamples;
@property long long omitStacksBelowSampleCount;
@property bool omitStacksOnAC;
@property bool omitStacksOnBattery;
@property bool omitStacksWithUserActive;
@property bool omitStacksWithUserIdle;
@property BOOL omitTasksBelowPercentOfTotalSamples;
@property long long omitTasksBelowSampleCount;
@property bool orderTasksBySampleCount;
@property bool patchTruncatedStacks;
@property (copy) NSSet *pidsToPrint;
@property bool printHeavyStacks;
@property bool printJson;
@property bool printSpinSignatureStack;
@property bool printTargetHIDEvent;
@property bool printTargetThreadOnly;
@property (copy) NSSet *processNamesToPrint;
@property (copy) NSSet *processUUIDsToPrint;
@property bool showThreadStateAsLeafFrame;
@property bool systemstatsFormat;
@property bool tabDelineateBinaryImageSections;
@property (copy) NSSet *tidsToPrint;
@property (copy) NSSet *uniquePidsToPrint;
@property bool verbose;

- (void).cxx_destruct;
- (bool)aggregateFramesByOffsetIntoBinary;
- (bool)aggregateProcessesByExecutable;
- (bool)aggregateStacksByProcess;
- (bool)aggregateStacksByThread;
- (bool)binaryImagesBeforeStacks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)displayAddressesInBlockedReasons;
- (bool)displayAllBinaries;
- (bool)displayAllHIDEvents;
- (bool)displayAllTaskSizeChanges;
- (bool)displayBinaryImageAddresses;
- (bool)displayBinaryImagesLackingNameOrPath;
- (bool)displayBlockedReasons;
- (bool)displayBlockedReasonsLackingProcessOwners;
- (bool)displayBlockedThreads;
- (bool)displayBody;
- (bool)displayCPUNumForNonRunningThreads;
- (bool)displayCPUNumForRunningThreads;
- (bool)displayDetailedCpuTime;
- (bool)displayDetailedWallTime;
- (bool)displayEmptyBootArgs;
- (bool)displayFooter;
- (bool)displayFrameAddresses;
- (bool)displayFullSourcePaths;
- (bool)displayHeader;
- (bool)displayIdleWorkQueueThreads;
- (bool)displayOffsetsFromUnnamedSymbols;
- (bool)displayProcessFirstLastTimes;
- (bool)displayRunnableThreads;
- (bool)displayRunningThreads;
- (bool)displayStacksWithZeroCount;
- (bool)displaySub1MsCpuTime;
- (bool)displaySymbolInformation;
- (bool)displayTasksWithZeroCount;
- (bool)displayThreadRunningState;
- (bool)forceOneBasedTimeIndexes;
- (bool)includeUserIdleAndBatteryStateInStacks;
- (id)init;
- (bool)microstackshotsFormat;
- (long long)omitFramesAfterLineCount;
- (BOOL)omitFramesBelowPercentOfStackSamples;
- (long long)omitFramesBelowSampleCount;
- (int)omitStacksAboveBasePriority;
- (int)omitStacksBelowBasePriority;
- (BOOL)omitStacksBelowPercentOfTaskSamples;
- (long long)omitStacksBelowSampleCount;
- (bool)omitStacksOnAC;
- (bool)omitStacksOnBattery;
- (bool)omitStacksWithUserActive;
- (bool)omitStacksWithUserIdle;
- (BOOL)omitTasksBelowPercentOfTotalSamples;
- (long long)omitTasksBelowSampleCount;
- (bool)orderTasksBySampleCount;
- (bool)patchTruncatedStacks;
- (id)pidsToPrint;
- (bool)printHeavyStacks;
- (bool)printJson;
- (bool)printSpinSignatureStack;
- (bool)printTargetHIDEvent;
- (bool)printTargetThreadOnly;
- (id)processNamesToPrint;
- (id)processUUIDsToPrint;
- (void)setAggregateFramesByOffsetIntoBinary:(bool)arg1;
- (void)setAggregateProcessesByExecutable:(bool)arg1;
- (void)setAggregateStacksByProcess:(bool)arg1;
- (void)setAggregateStacksByThread:(bool)arg1;
- (void)setBinaryImagesBeforeStacks:(bool)arg1;
- (void)setDisplayAddressesInBlockedReasons:(bool)arg1;
- (void)setDisplayAllBinaries:(bool)arg1;
- (void)setDisplayAllHIDEvents:(bool)arg1;
- (void)setDisplayAllTaskSizeChanges:(bool)arg1;
- (void)setDisplayBinaryImageAddresses:(bool)arg1;
- (void)setDisplayBinaryImagesLackingNameOrPath:(bool)arg1;
- (void)setDisplayBlockedReasons:(bool)arg1;
- (void)setDisplayBlockedReasonsLackingProcessOwners:(bool)arg1;
- (void)setDisplayBlockedThreads:(bool)arg1;
- (void)setDisplayBody:(bool)arg1;
- (void)setDisplayCPUNumForNonRunningThreads:(bool)arg1;
- (void)setDisplayCPUNumForRunningThreads:(bool)arg1;
- (void)setDisplayDetailedCpuTime:(bool)arg1;
- (void)setDisplayDetailedWallTime:(bool)arg1;
- (void)setDisplayEmptyBootArgs:(bool)arg1;
- (void)setDisplayFooter:(bool)arg1;
- (void)setDisplayFrameAddresses:(bool)arg1;
- (void)setDisplayFullSourcePaths:(bool)arg1;
- (void)setDisplayHeader:(bool)arg1;
- (void)setDisplayIdleWorkQueueThreads:(bool)arg1;
- (void)setDisplayOffsetsFromUnnamedSymbols:(bool)arg1;
- (void)setDisplayProcessFirstLastTimes:(bool)arg1;
- (void)setDisplayRunnableThreads:(bool)arg1;
- (void)setDisplayRunningThreads:(bool)arg1;
- (void)setDisplayStacksWithZeroCount:(bool)arg1;
- (void)setDisplaySub1MsCpuTime:(bool)arg1;
- (void)setDisplaySymbolInformation:(bool)arg1;
- (void)setDisplayTasksWithZeroCount:(bool)arg1;
- (void)setDisplayThreadRunningState:(bool)arg1;
- (void)setForceOneBasedTimeIndexes:(bool)arg1;
- (void)setIncludeUserIdleAndBatteryStateInStacks:(bool)arg1;
- (void)setMicrostackshotsFormat:(bool)arg1;
- (void)setOmitFramesAfterLineCount:(long long)arg1;
- (void)setOmitFramesBelowPercentOfStackSamples:(BOOL)arg1;
- (void)setOmitFramesBelowSampleCount:(long long)arg1;
- (void)setOmitStacksAboveBasePriority:(int)arg1;
- (void)setOmitStacksBelowBasePriority:(int)arg1;
- (void)setOmitStacksBelowPercentOfTaskSamples:(BOOL)arg1;
- (void)setOmitStacksBelowSampleCount:(long long)arg1;
- (void)setOmitStacksOnAC:(bool)arg1;
- (void)setOmitStacksOnBattery:(bool)arg1;
- (void)setOmitStacksWithUserActive:(bool)arg1;
- (void)setOmitStacksWithUserIdle:(bool)arg1;
- (void)setOmitTasksBelowPercentOfTotalSamples:(BOOL)arg1;
- (void)setOmitTasksBelowSampleCount:(long long)arg1;
- (void)setOrderTasksBySampleCount:(bool)arg1;
- (void)setPatchTruncatedStacks:(bool)arg1;
- (void)setPidsToPrint:(id)arg1;
- (void)setPrintHeavyStacks:(bool)arg1;
- (void)setPrintJson:(bool)arg1;
- (void)setPrintSpinSignatureStack:(bool)arg1;
- (void)setPrintTargetHIDEvent:(bool)arg1;
- (void)setPrintTargetThreadOnly:(bool)arg1;
- (void)setProcessNamesToPrint:(id)arg1;
- (void)setProcessUUIDsToPrint:(id)arg1;
- (void)setShowThreadStateAsLeafFrame:(bool)arg1;
- (void)setSystemstatsFormat:(bool)arg1;
- (void)setTabDelineateBinaryImageSections:(bool)arg1;
- (void)setTidsToPrint:(id)arg1;
- (void)setUniquePidsToPrint:(id)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)showThreadStateAsLeafFrame;
- (bool)systemstatsFormat;
- (bool)tabDelineateBinaryImageSections;
- (id)tidsToPrint;
- (id)uniquePidsToPrint;
- (bool)verbose;

@end