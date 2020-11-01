/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFEditorViewController : UIViewController {
    WFEditorHostingViewController * _hostingViewController;
    WFWorkflow * _workflow;
}

@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic, readonly) WFEditorHostingViewController *hostingViewController;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)hostingViewController;
- (id)initWithWorkflow:(id)arg1;
- (bool)isEditable;
- (void)loadView;
- (void)setEditable:(bool)arg1;
- (id)workflow;

@end