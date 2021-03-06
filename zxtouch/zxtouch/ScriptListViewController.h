//
//  ScriptListViewController.h
//  zxtouch
//
//  Created by Jason on 2020/12/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ScriptListViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *_scriptListTableView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *logButton;

- (IBAction)addButtonClick:(id)sender;
- (IBAction)logButtonClick:(id)sender;
- (void) setFolder:(NSString*)folder;
- (void)refreshTable;


@end

NS_ASSUME_NONNULL_END
