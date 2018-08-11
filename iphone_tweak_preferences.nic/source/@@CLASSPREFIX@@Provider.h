#include <CSPreferences/CSPreferencesProvider.h>
#define prefs [@@CLASSPREFIX@@Provider sharedProvider]

@interface @@CLASSPREFIX@@Provider : NSObject

+ (CSPreferencesProvider *)sharedProvider;

@end