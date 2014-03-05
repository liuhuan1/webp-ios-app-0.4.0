#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIApplicationDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UIScrollViewDelegate>

@property (assign, nonatomic) IBOutlet UIPickerView *imagePickerView;
@property (assign, nonatomic) IBOutlet UIScrollView *imageScrollView;
@property (assign, nonatomic) IBOutlet UIImageView *testImageView;
@property (assign, nonatomic) IBOutlet UISwitch *bypassFilteringSwitch;
@property (assign, nonatomic) IBOutlet UISwitch *noFancyUpsamplingSwitch;
@property (assign, nonatomic) IBOutlet UISwitch *useThreadsSwitch;

@end
