// move this header and its implementation into the root of your project
// add this line to your Makefile `@@PACKAGENAME@@_LDFLAGS += -lCSPreferencesProvider`

#include <CSPreferencesProvider.h>
#define prefs [@@CLASSPREFIX@@Provider sharedProvider]

@interface @@CLASSPREFIX@@Provider : NSObject

+ (CSPreferencesProvider *)sharedProvider;

@end