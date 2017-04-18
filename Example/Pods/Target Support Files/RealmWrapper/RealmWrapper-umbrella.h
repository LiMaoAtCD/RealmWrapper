#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSError+RLMSync.h"
#import "Realm.h"
#import "RLMArray.h"
#import "RLMCollection.h"
#import "RLMConstants.h"
#import "RLMMigration.h"
#import "RLMObject.h"
#import "RLMObjectBase.h"
#import "RLMObjectBase_Dynamic.h"
#import "RLMObjectSchema.h"
#import "RLMPlatform.h"
#import "RLMProperty.h"
#import "RLMRealm.h"
#import "RLMRealmConfiguration+Sync.h"
#import "RLMRealmConfiguration.h"
#import "RLMRealm_Dynamic.h"
#import "RLMResults.h"
#import "RLMSchema.h"
#import "RLMSyncConfiguration.h"
#import "RLMSyncCredentials.h"
#import "RLMSyncManager.h"
#import "RLMSyncPermission.h"
#import "RLMSyncPermissionChange.h"
#import "RLMSyncPermissionOffer.h"
#import "RLMSyncPermissionOfferResponse.h"
#import "RLMSyncSession.h"
#import "RLMSyncUser.h"
#import "RLMSyncUtil.h"
#import "RLMThreadSafeReference.h"
#import "RLMAccessor.h"
#import "RLMArray_Private.h"
#import "RLMListBase.h"
#import "RLMMigration_Private.h"
#import "RLMObjectSchema_Private.h"
#import "RLMObjectStore.h"
#import "RLMObject_Private.h"
#import "RLMOptionalBase.h"
#import "RLMProperty_Private.h"
#import "RLMRealmConfiguration_Private.h"
#import "RLMRealm_Private.h"
#import "RLMResults_Private.h"
#import "RLMSchema_Private.h"
#import "RLMSyncConfiguration_Private.h"
#import "RLMSyncPermissionChange_Private.h"
#import "RLMSyncPermissionOfferResponse_Private.h"
#import "RLMSyncPermissionOffer_Private.h"
#import "RLMSyncPermission_Private.h"
#import "RLMSyncUtil_Private.h"
#import "RealmSwift-Swift.h"

FOUNDATION_EXPORT double RealmWrapperVersionNumber;
FOUNDATION_EXPORT const unsigned char RealmWrapperVersionString[];

