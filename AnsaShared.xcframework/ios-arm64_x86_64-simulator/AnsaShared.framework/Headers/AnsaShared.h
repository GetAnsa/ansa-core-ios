#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSArray<ObjectType>, AnsaShared__SkieTypeExportsKt, AnsaShared__SkieSuspendWrappersKt, AnsaSharedUserReloadConfiguration, AnsaSharedUserReferralConfiguration, AnsaSharedUserPresetReloadAmounts, AnsaSharedUseBalanceRequest, AnsaSharedUShort, AnsaSharedULong, AnsaSharedUInt, AnsaSharedUByte, AnsaSharedTransactionTypeUseBalance, AnsaSharedTransactionTypeUnknown, AnsaSharedTransactionTypeRefundPaymentMethod, AnsaSharedTransactionTypeMerchantRefund, AnsaSharedTransactionTypeMerchantAddPromo, AnsaSharedTransactionTypeCompanion, AnsaSharedTransactionTypeAddBalance, AnsaSharedTransactionType, AnsaSharedTransactionSourceUseBalanceAndReload, AnsaSharedTransactionSourceUseBalance, AnsaSharedTransactionSourceUnknown, AnsaSharedTransactionSourceCompanion, AnsaSharedTransactionSourceAutoReload, AnsaSharedTransactionSourceAddBalance, AnsaSharedTransactionSource, AnsaSharedTransactionResult, AnsaSharedTransaction, AnsaSharedSkie_SuspendResultSuccess, AnsaSharedSkie_SuspendResultError, AnsaSharedSkie_SuspendResultCanceled, AnsaSharedSkie_SuspendResult, AnsaSharedSkie_SuspendHandler, AnsaSharedSkie_CancellationHandler, AnsaSharedSkieKotlinStateFlow<T>, AnsaSharedSkieKotlinSharedFlow<T>, AnsaSharedSkieKotlinOptionalStateFlow<T>, AnsaSharedSkieKotlinOptionalSharedFlow<T>, AnsaSharedSkieKotlinOptionalMutableStateFlow<T>, AnsaSharedSkieKotlinOptionalMutableSharedFlow<T>, AnsaSharedSkieKotlinOptionalFlow<T>, AnsaSharedSkieKotlinMutableStateFlow<T>, AnsaSharedSkieKotlinMutableSharedFlow<T>, AnsaSharedSkieKotlinFlow<T>, AnsaSharedSkieColdFlowIterator<E>, AnsaSharedShort, AnsaSharedRewardTier, AnsaSharedPromotions, AnsaSharedPresetReloadAmounts, AnsaSharedPaymentSession, AnsaSharedPaymentMethodCollection, AnsaSharedPaymentMethod, AnsaSharedNumber, AnsaSharedNetwork_implRealAuthSessionManager, AnsaSharedNetworkTypeCompanion, AnsaSharedNetworkType, AnsaSharedMutableSet<ObjectType>, AnsaSharedMutableDictionary<KeyType, ObjectType>, AnsaSharedMerchant_implUserReferralConfigResponseCompanion, AnsaSharedMerchant_implUserReferralConfigResponse, AnsaSharedMerchant_implRewardTierResponseCompanion, AnsaSharedMerchant_implRewardTierResponse, AnsaSharedMerchant_implRealMerchantRepository, AnsaSharedMerchant_implPromotionsResponseCompanion, AnsaSharedMerchant_implPromotionsResponse, AnsaSharedMerchant_implPresetReloadAmountResponseCompanion, AnsaSharedMerchant_implPresetReloadAmountResponse, AnsaSharedMerchant_implMetadataResponseCompanion, AnsaSharedMerchant_implMetadataResponse, AnsaSharedMerchant_implMerchantResponseCompanion, AnsaSharedMerchant_implMerchantResponse, AnsaSharedMerchant_implMerchantMapper, AnsaSharedMerchant_implAutoReloadConfigResponseCompanion, AnsaSharedMerchant_implAutoReloadConfigResponse, AnsaSharedMerchant_implAppReloadConfigurationResponseCompanion, AnsaSharedMerchant_implAppReloadConfigurationResponse, AnsaSharedMerchantMetadata, AnsaSharedMerchantCartArtInfo, AnsaSharedMerchantBasisTheoryInfo, AnsaSharedMerchantAutoReloadConfiguration, AnsaSharedMerchant, AnsaSharedLong, AnsaSharedLogLevel, AnsaSharedKtor_utilsWeekDayCompanion, AnsaSharedKtor_utilsWeekDay, AnsaSharedKtor_utilsTypeInfo, AnsaSharedKtor_utilsStringValuesBuilderImpl, AnsaSharedKtor_utilsPipelinePhase, AnsaSharedKtor_utilsPipeline<TSubject, TContext>, AnsaSharedKtor_utilsMonthCompanion, AnsaSharedKtor_utilsMonth, AnsaSharedKtor_utilsGMTDateCompanion, AnsaSharedKtor_utilsGMTDate, AnsaSharedKtor_utilsAttributeKey<T>, AnsaSharedKtor_ioMemoryCompanion, AnsaSharedKtor_ioMemory, AnsaSharedKtor_ioInputCompanion, AnsaSharedKtor_ioInput, AnsaSharedKtor_ioChunkBufferCompanion, AnsaSharedKtor_ioChunkBuffer, AnsaSharedKtor_ioByteReadPacketCompanion, AnsaSharedKtor_ioByteReadPacket, AnsaSharedKtor_ioBufferCompanion, AnsaSharedKtor_ioBuffer, AnsaSharedKtor_httpUrlCompanion, AnsaSharedKtor_httpUrl, AnsaSharedKtor_httpURLProtocolCompanion, AnsaSharedKtor_httpURLProtocol, AnsaSharedKtor_httpURLBuilderCompanion, AnsaSharedKtor_httpURLBuilder, AnsaSharedKtor_httpOutgoingContentWriteChannelContent, AnsaSharedKtor_httpOutgoingContentReadChannelContent, AnsaSharedKtor_httpOutgoingContentProtocolUpgrade, AnsaSharedKtor_httpOutgoingContentNoContent, AnsaSharedKtor_httpOutgoingContentByteArrayContent, AnsaSharedKtor_httpOutgoingContent, AnsaSharedKtor_httpHttpStatusCodeCompanion, AnsaSharedKtor_httpHttpStatusCode, AnsaSharedKtor_httpHttpProtocolVersionCompanion, AnsaSharedKtor_httpHttpProtocolVersion, AnsaSharedKtor_httpHttpMethodCompanion, AnsaSharedKtor_httpHttpMethod, AnsaSharedKtor_httpHeadersBuilder, AnsaSharedKtor_httpHeaderValueWithParametersCompanion, AnsaSharedKtor_httpHeaderValueWithParameters, AnsaSharedKtor_httpHeaderValueParam, AnsaSharedKtor_httpContentTypeCompanion, AnsaSharedKtor_httpContentType, AnsaSharedKtor_eventsEvents, AnsaSharedKtor_eventsEventDefinition<T>, AnsaSharedKtor_client_coreResponseException, AnsaSharedKtor_client_coreProxyConfig, AnsaSharedKtor_client_coreHttpSendPipelinePhases, AnsaSharedKtor_client_coreHttpSendPipeline, AnsaSharedKtor_client_coreHttpResponsePipelinePhases, AnsaSharedKtor_client_coreHttpResponsePipeline, AnsaSharedKtor_client_coreHttpResponseData, AnsaSharedKtor_client_coreHttpResponseContainer, AnsaSharedKtor_client_coreHttpResponse, AnsaSharedKtor_client_coreHttpRequestPipelinePhases, AnsaSharedKtor_client_coreHttpRequestPipeline, AnsaSharedKtor_client_coreHttpRequestData, AnsaSharedKtor_client_coreHttpRequestBuilderCompanion, AnsaSharedKtor_client_coreHttpRequestBuilder, AnsaSharedKtor_client_coreHttpReceivePipelinePhases, AnsaSharedKtor_client_coreHttpReceivePipeline, AnsaSharedKtor_client_coreHttpClientEngineConfig, AnsaSharedKtor_client_coreHttpClientConfig<T>, AnsaSharedKtor_client_coreHttpClientCallCompanion, AnsaSharedKtor_client_coreHttpClientCall, AnsaSharedKtor_client_coreHttpClient, AnsaSharedKtorWrapper, AnsaSharedKtorProvider, AnsaSharedKotlinx_serialization_jsonJsonPrimitiveCompanion, AnsaSharedKotlinx_serialization_jsonJsonPrimitive, AnsaSharedKotlinx_serialization_jsonJsonNull, AnsaSharedKotlinx_serialization_jsonJsonElementCompanion, AnsaSharedKotlinx_serialization_jsonJsonElement, AnsaSharedKotlinx_serialization_coreStructureKindOBJECT, AnsaSharedKotlinx_serialization_coreStructureKindMAP, AnsaSharedKotlinx_serialization_coreStructureKindLIST, AnsaSharedKotlinx_serialization_coreStructureKindCLASS, AnsaSharedKotlinx_serialization_coreStructureKind, AnsaSharedKotlinx_serialization_coreSerializersModule, AnsaSharedKotlinx_serialization_coreSerialKindENUM, AnsaSharedKotlinx_serialization_coreSerialKindCONTEXTUAL, AnsaSharedKotlinx_serialization_coreSerialKind, AnsaSharedKotlinx_serialization_corePrimitiveKindSTRING, AnsaSharedKotlinx_serialization_corePrimitiveKindSHORT, AnsaSharedKotlinx_serialization_corePrimitiveKindLONG, AnsaSharedKotlinx_serialization_corePrimitiveKindINT, AnsaSharedKotlinx_serialization_corePrimitiveKindFLOAT, AnsaSharedKotlinx_serialization_corePrimitiveKindDOUBLE, AnsaSharedKotlinx_serialization_corePrimitiveKindCHAR, AnsaSharedKotlinx_serialization_corePrimitiveKindBYTE, AnsaSharedKotlinx_serialization_corePrimitiveKindBOOLEAN, AnsaSharedKotlinx_serialization_corePrimitiveKind, AnsaSharedKotlinx_serialization_corePolymorphicKindSEALED, AnsaSharedKotlinx_serialization_corePolymorphicKindOPEN, AnsaSharedKotlinx_serialization_corePolymorphicKind, AnsaSharedKotlinx_coroutines_coreCoroutineDispatcherKey, AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher, AnsaSharedKotlin_inject_runtimeLazyMap, AnsaSharedKotlinUnit, AnsaSharedKotlinThrowable, AnsaSharedKotlinRuntimeException, AnsaSharedKotlinNothing, AnsaSharedKotlinLongRangeCompanion, AnsaSharedKotlinLongRange, AnsaSharedKotlinLongProgressionCompanion, AnsaSharedKotlinLongProgression, AnsaSharedKotlinLongIterator, AnsaSharedKotlinKVariance, AnsaSharedKotlinKTypeProjectionCompanion, AnsaSharedKotlinKTypeProjection, AnsaSharedKotlinIllegalStateException, AnsaSharedKotlinException, AnsaSharedKotlinEnumCompanion, AnsaSharedKotlinEnum<E>, AnsaSharedKotlinCancellationException, AnsaSharedKotlinByteIterator, AnsaSharedKotlinByteArray, AnsaSharedKotlinArray<T>, AnsaSharedKotlinAbstractCoroutineContextKey<B, E>, AnsaSharedKotlinAbstractCoroutineContextElement, AnsaSharedKmpAppComponentCompanion, AnsaSharedKmpAppComponent, AnsaSharedInt, AnsaSharedInjectKmpAppComponentKt, AnsaSharedInjectKmpAppComponent, AnsaSharedHttpExceptions, AnsaSharedHttpErrorResponseCompanion, AnsaSharedHttpErrorResponse, AnsaSharedHttpClientHelpersKt, AnsaSharedFloat, AnsaSharedDouble, AnsaSharedCustomer_implUserReloadConfigurationResponseCompanion, AnsaSharedCustomer_implUserReloadConfigurationResponse, AnsaSharedCustomer_implUserReloadConfigurationMapper, AnsaSharedCustomer_implUseBalanceResponseCompanion, AnsaSharedCustomer_implUseBalanceResponse, AnsaSharedCustomer_implUseBalanceMapper, AnsaSharedCustomer_implTransactionResponseCompanion, AnsaSharedCustomer_implTransactionResponse, AnsaSharedCustomer_implTransactionMapper, AnsaSharedCustomer_implRealCustomerRepository, AnsaSharedCustomer_implPresetReloadAmountResponseCompanion, AnsaSharedCustomer_implPresetReloadAmountResponse, AnsaSharedCustomer_implPaymentMethodsResponseCompanion, AnsaSharedCustomer_implPaymentMethodsResponse, AnsaSharedCustomer_implPaymentMethodResponseCompanion, AnsaSharedCustomer_implPaymentMethodResponse, AnsaSharedCustomer_implPaymentMethodMapper, AnsaSharedCustomer_implPaymentMethodListMapper, AnsaSharedCustomer_implCustomerResponseSquareCompanion, AnsaSharedCustomer_implCustomerResponseSquare, AnsaSharedCustomer_implCustomerResponseCurrentBalanceCompanion, AnsaSharedCustomer_implCustomerResponseCurrentBalance, AnsaSharedCustomer_implCustomerResponseCompanion, AnsaSharedCustomer_implCustomerResponseBillingDetailsCompanion, AnsaSharedCustomer_implCustomerResponseBillingDetails, AnsaSharedCustomer_implCustomerResponseAnsaMetadataCompanion, AnsaSharedCustomer_implCustomerResponseAnsaMetadata, AnsaSharedCustomer_implCustomerResponse, AnsaSharedCustomer_implCustomerMapper, AnsaSharedCustomer_implCurrentBalanceCompanion, AnsaSharedCustomer_implCurrentBalance, AnsaSharedCustomer_implCardResponseCompanion, AnsaSharedCustomer_implCardResponse, AnsaSharedCustomer_implCardMapper, AnsaSharedCustomer_implBillingDetailsMapper, AnsaSharedCustomer_implBalanceMapper_, AnsaSharedCustomer_implBalanceMapper, AnsaSharedCustomer_implAutoReloadConfigurationResponseCompanion, AnsaSharedCustomer_implAutoReloadConfigurationResponse, AnsaSharedCustomer_implAutoReloadConfigMapper, AnsaSharedCustomer_implAddPaymentMethodResponseCompanion, AnsaSharedCustomer_implAddPaymentMethodResponse, AnsaSharedCustomer_implAddPaymentMethodMapper, AnsaSharedCustomer_implAddBalanceResponseCompanion, AnsaSharedCustomer_implAddBalanceResponse, AnsaSharedCustomer_implAddBalanceMapper, AnsaSharedCustomer, AnsaSharedCard, AnsaSharedByte, AnsaSharedBoolean, AnsaSharedBillingDetails, AnsaSharedBase, AnsaSharedBalanceUpdate, AnsaSharedBalanceAdjustment, AnsaSharedBalance, AnsaSharedAutoReloadConfigurationStatusEnabled, AnsaSharedAutoReloadConfigurationStatusDisabled, AnsaSharedAutoReloadConfigurationRequest, AnsaSharedAutoReloadConfiguration, AnsaSharedAuthTypePublishableKey, AnsaSharedAuthTypeNone, AnsaSharedAuthTypeClientSecret, AnsaSharedAppReloadConfiguration, AnsaSharedApiResultSuccess<T>, AnsaSharedApiResultErrorSerializationError, AnsaSharedApiResultErrorHttpError, AnsaSharedApiResultErrorGenericError, AnsaSharedApiResultError, AnsaSharedApiResult<T>, AnsaSharedAddPaymentMethodTypeKmpStripe, AnsaSharedAddPaymentMethodTypeKmpSquare, AnsaSharedAddPaymentMethodTypeKmpGooglePay, AnsaSharedAddPaymentMethodTypeKmpCreditCard, AnsaSharedAddPaymentMethodTypeKmpApplePay, AnsaSharedAddPaymentMethodRequest, AnsaSharedAddBalanceRequest;

@protocol NSCopying, AnsaSharedSkie_DispatcherDelegate, AnsaSharedNetwork_implNetworkBindings, AnsaSharedMerchant_implMerchantBindings, AnsaSharedMerchantRepository, AnsaSharedKtor_utilsStringValuesBuilder, AnsaSharedKtor_utilsStringValues, AnsaSharedKtor_utilsAttributes, AnsaSharedKtor_ioReadSession, AnsaSharedKtor_ioObjectPool, AnsaSharedKtor_ioCloseable, AnsaSharedKtor_ioByteWriteChannel, AnsaSharedKtor_ioByteReadChannel, AnsaSharedKtor_httpParametersBuilder, AnsaSharedKtor_httpParameters, AnsaSharedKtor_httpHttpMessageBuilder, AnsaSharedKtor_httpHttpMessage, AnsaSharedKtor_httpHeaders, AnsaSharedKtor_client_coreHttpRequest, AnsaSharedKtor_client_coreHttpClientPlugin, AnsaSharedKtor_client_coreHttpClientEngineCapability, AnsaSharedKtor_client_coreHttpClientEngine, AnsaSharedKtor_client_coreClientPlugin, AnsaSharedKotlinx_serialization_coreSerializersModuleCollector, AnsaSharedKotlinx_serialization_coreSerializationStrategy, AnsaSharedKotlinx_serialization_coreSerialDescriptor, AnsaSharedKotlinx_serialization_coreKSerializer, AnsaSharedKotlinx_serialization_coreEncoder, AnsaSharedKotlinx_serialization_coreDeserializationStrategy, AnsaSharedKotlinx_serialization_coreDecoder, AnsaSharedKotlinx_serialization_coreCompositeEncoder, AnsaSharedKotlinx_serialization_coreCompositeDecoder, AnsaSharedKotlinx_coroutines_coreStateFlow, AnsaSharedKotlinx_coroutines_coreSharedFlow, AnsaSharedKotlinx_coroutines_coreSelectInstance, AnsaSharedKotlinx_coroutines_coreSelectClause2, AnsaSharedKotlinx_coroutines_coreSelectClause1, AnsaSharedKotlinx_coroutines_coreSelectClause0, AnsaSharedKotlinx_coroutines_coreSelectClause, AnsaSharedKotlinx_coroutines_coreRunnable, AnsaSharedKotlinx_coroutines_coreParentJob, AnsaSharedKotlinx_coroutines_coreMutableStateFlow, AnsaSharedKotlinx_coroutines_coreMutableSharedFlow, AnsaSharedKotlinx_coroutines_coreJob, AnsaSharedKotlinx_coroutines_coreFlowCollector, AnsaSharedKotlinx_coroutines_coreFlow, AnsaSharedKotlinx_coroutines_coreDisposableHandle, AnsaSharedKotlinx_coroutines_coreCoroutineScope, AnsaSharedKotlinx_coroutines_coreChildJob, AnsaSharedKotlinx_coroutines_coreChildHandle, AnsaSharedKotlin_inject_runtimeScopedComponent, AnsaSharedKotlinSuspendFunction2, AnsaSharedKotlinSuspendFunction1, AnsaSharedKotlinSequence, AnsaSharedKotlinOpenEndRange, AnsaSharedKotlinMapEntry, AnsaSharedKotlinKType, AnsaSharedKotlinKDeclarationContainer, AnsaSharedKotlinKClassifier, AnsaSharedKotlinKClass, AnsaSharedKotlinKAnnotatedElement, AnsaSharedKotlinIterator, AnsaSharedKotlinIterable, AnsaSharedKotlinFunction, AnsaSharedKotlinCoroutineContextKey, AnsaSharedKotlinCoroutineContextElement, AnsaSharedKotlinCoroutineContext, AnsaSharedKotlinContinuationInterceptor, AnsaSharedKotlinContinuation, AnsaSharedKotlinComparable, AnsaSharedKotlinClosedRange, AnsaSharedKotlinAppendable, AnsaSharedKotlinAnnotation, AnsaSharedKmpAppComponentBindings, AnsaSharedDummyInterface, AnsaSharedCustomer_implCustomerBindings, AnsaSharedCustomerRepository, AnsaSharedCore_implMapper, AnsaSharedClientSecretProviderIos, AnsaSharedAutoReloadConfigurationStatus, AnsaSharedAuthType, AnsaSharedAuthSessionManager, AnsaSharedAnsaLogger, AnsaSharedAddPaymentMethodTypeKmp;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AnsaSharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AnsaSharedBase (AnsaSharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AnsaSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AnsaSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAnsaSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AnsaSharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface AnsaSharedByte : AnsaSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AnsaSharedUByte : AnsaSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AnsaSharedShort : AnsaSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AnsaSharedUShort : AnsaSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AnsaSharedInt : AnsaSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AnsaSharedUInt : AnsaSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AnsaSharedLong : AnsaSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AnsaSharedULong : AnsaSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AnsaSharedFloat : AnsaSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AnsaSharedDouble : AnsaSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AnsaSharedBoolean : AnsaSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface AnsaSharedSkieColdFlowIterator<E> : AnsaSharedBase
- (instancetype)initWithFlow:(id<AnsaSharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(AnsaSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol AnsaSharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface AnsaSharedSkieKotlinFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol AnsaSharedKotlinx_coroutines_coreSharedFlow <AnsaSharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol AnsaSharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol AnsaSharedKotlinx_coroutines_coreMutableSharedFlow <AnsaSharedKotlinx_coroutines_coreSharedFlow, AnsaSharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface AnsaSharedSkieKotlinMutableSharedFlow<T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol AnsaSharedKotlinx_coroutines_coreStateFlow <AnsaSharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol AnsaSharedKotlinx_coroutines_coreMutableStateFlow <AnsaSharedKotlinx_coroutines_coreStateFlow, AnsaSharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface AnsaSharedSkieKotlinMutableStateFlow<T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface AnsaSharedSkieKotlinOptionalFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface AnsaSharedSkieKotlinOptionalMutableSharedFlow<T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface AnsaSharedSkieKotlinOptionalMutableStateFlow<T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface AnsaSharedSkieKotlinOptionalSharedFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface AnsaSharedSkieKotlinOptionalStateFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface AnsaSharedSkieKotlinSharedFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface AnsaSharedSkieKotlinStateFlow<__covariant T> : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<AnsaSharedKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface AnsaSharedSkie_CancellationHandler : AnsaSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol AnsaSharedSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<AnsaSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface AnsaSharedSkie_SuspendHandler : AnsaSharedBase
- (instancetype)initWithCancellationHandler:(AnsaSharedSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<AnsaSharedSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(AnsaSharedSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface AnsaSharedSkie_SuspendResult : AnsaSharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface AnsaSharedSkie_SuspendResultCanceled : AnsaSharedSkie_SuspendResult
@property (class, readonly, getter=shared) AnsaSharedSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface AnsaSharedSkie_SuspendResultError : AnsaSharedSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface AnsaSharedSkie_SuspendResultSuccess : AnsaSharedSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("DummyInterface")))
@protocol AnsaSharedDummyInterface
@required
@end

__attribute__((swift_name("Network_implNetworkBindings")))
@protocol AnsaSharedNetwork_implNetworkBindings
@required
- (id<AnsaSharedAuthSessionManager>)bind:(AnsaSharedNetwork_implRealAuthSessionManager *)receiver __attribute__((swift_name("bind(_:)")));
- (id<AnsaSharedKtor_client_coreClientPlugin>)provideCustomPluginLogger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("provideCustomPlugin(logger:)")));
- (AnsaSharedKtorProvider *)provideKtorProviderNetworkType:(AnsaSharedNetworkType *)networkType authSessionManager:(id<AnsaSharedAuthSessionManager>)authSessionManager logger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("provideKtorProvider(networkType:authSessionManager:logger:)")));
@end

__attribute__((swift_name("Customer_implCustomerBindings")))
@protocol AnsaSharedCustomer_implCustomerBindings
@required
- (id<AnsaSharedCustomerRepository>)bind_:(AnsaSharedCustomer_implRealCustomerRepository *)receiver __attribute__((swift_name("bind(__:)")));
@property (readonly) id<AnsaSharedCustomerRepository> customerRepository __attribute__((swift_name("customerRepository")));
@end

__attribute__((swift_name("Merchant_implMerchantBindings")))
@protocol AnsaSharedMerchant_implMerchantBindings
@required
- (id<AnsaSharedMerchantRepository>)bind__:(AnsaSharedMerchant_implRealMerchantRepository *)receiver __attribute__((swift_name("bind(___:)")));
@property (readonly) id<AnsaSharedMerchantRepository> merchantRepository __attribute__((swift_name("merchantRepository")));
@end

__attribute__((swift_name("KmpAppComponentBindings")))
@protocol AnsaSharedKmpAppComponentBindings <AnsaSharedNetwork_implNetworkBindings, AnsaSharedCustomer_implCustomerBindings, AnsaSharedMerchant_implMerchantBindings>
@required
@end

__attribute__((swift_name("KmpAppComponent")))
@interface AnsaSharedKmpAppComponent : AnsaSharedBase <AnsaSharedKmpAppComponentBindings>
@property (class, readonly, getter=companion) AnsaSharedKmpAppComponentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<AnsaSharedClientSecretProviderIos> clientSecretProvider __attribute__((swift_name("clientSecretProvider")));
@property (readonly) id<AnsaSharedAnsaLogger> logger __attribute__((swift_name("logger")));
@property (readonly) AnsaSharedNetworkType *networkType __attribute__((swift_name("networkType")));
@property (readonly) NSString *publishableKey __attribute__((swift_name("publishableKey")));
- (instancetype)initWithPublishableKey:(NSString *)publishableKey networkType:(AnsaSharedNetworkType *)networkType clientSecretProvider:(id<AnsaSharedClientSecretProviderIos>)clientSecretProvider logger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("init(publishableKey:networkType:clientSecretProvider:logger:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlin_inject_runtimeScopedComponent")))
@protocol AnsaSharedKotlin_inject_runtimeScopedComponent
@required
@property (readonly) AnsaSharedKotlin_inject_runtimeLazyMap *_scoped __attribute__((swift_name("_scoped")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InjectKmpAppComponent")))
@interface AnsaSharedInjectKmpAppComponent : AnsaSharedKmpAppComponent <AnsaSharedKotlin_inject_runtimeScopedComponent>
@property (readonly) AnsaSharedKotlin_inject_runtimeLazyMap *_scoped __attribute__((swift_name("_scoped")));
@property (readonly) id<AnsaSharedCustomerRepository> customerRepository __attribute__((swift_name("customerRepository")));
@property (readonly) id<AnsaSharedMerchantRepository> merchantRepository __attribute__((swift_name("merchantRepository")));
- (instancetype)initWithPublishableKey:(NSString *)publishableKey networkType:(AnsaSharedNetworkType *)networkType clientSecretProvider:(id<AnsaSharedClientSecretProviderIos>)clientSecretProvider logger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("init(publishableKey:networkType:clientSecretProvider:logger:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpAppComponent.Companion")))
@interface AnsaSharedKmpAppComponentCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKmpAppComponentCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer")))
@interface AnsaSharedCustomer : AnsaSharedBase
@property (readonly) AnsaSharedAutoReloadConfiguration * _Nullable autoReloadConfig __attribute__((swift_name("autoReloadConfig")));
@property (readonly) AnsaSharedBalance *balance __attribute__((swift_name("balance")));
@property (readonly) AnsaSharedBillingDetails *billingDetails __attribute__((swift_name("billingDetails")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *merchantID __attribute__((swift_name("merchantID")));
@property (readonly) NSArray<AnsaSharedPaymentMethod *> *paymentMethods __attribute__((swift_name("paymentMethods")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
- (instancetype)initWithId:(NSString *)id balance:(AnsaSharedBalance *)balance billingDetails:(AnsaSharedBillingDetails *)billingDetails email:(NSString * _Nullable)email merchantID:(NSString *)merchantID phone:(NSString * _Nullable)phone status:(NSString *)status autoReloadConfig:(AnsaSharedAutoReloadConfiguration * _Nullable)autoReloadConfig paymentMethods:(NSArray<AnsaSharedPaymentMethod *> *)paymentMethods __attribute__((swift_name("init(id:balance:billingDetails:email:merchantID:phone:status:autoReloadConfig:paymentMethods:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer *)doCopyId:(NSString *)id balance:(AnsaSharedBalance *)balance billingDetails:(AnsaSharedBillingDetails *)billingDetails email:(NSString * _Nullable)email merchantID:(NSString *)merchantID phone:(NSString * _Nullable)phone status:(NSString *)status autoReloadConfig:(AnsaSharedAutoReloadConfiguration * _Nullable)autoReloadConfig paymentMethods:(NSArray<AnsaSharedPaymentMethod *> *)paymentMethods __attribute__((swift_name("doCopy(id:balance:billingDetails:email:merchantID:phone:status:autoReloadConfig:paymentMethods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetReloadAmounts")))
@interface AnsaSharedUserPresetReloadAmounts : AnsaSharedBase
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isMostPopular __attribute__((swift_name("isMostPopular")));
@property (readonly) int32_t promotionAmount __attribute__((swift_name("promotionAmount")));
- (instancetype)initWithId:(NSString *)id amount:(int32_t)amount promotionAmount:(int32_t)promotionAmount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("init(id:amount:promotionAmount:isMostPopular:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedUserPresetReloadAmounts *)doCopyId:(NSString *)id amount:(int32_t)amount promotionAmount:(int32_t)promotionAmount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("doCopy(id:amount:promotionAmount:isMostPopular:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserReloadConfiguration")))
@interface AnsaSharedUserReloadConfiguration : AnsaSharedBase
@property (readonly) BOOL allowCustomAmount __attribute__((swift_name("allowCustomAmount")));
@property (readonly) NSArray<AnsaSharedUserPresetReloadAmounts *> *presetAmounts __attribute__((swift_name("presetAmounts")));
- (instancetype)initWithAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedUserPresetReloadAmounts *> *)presetAmounts __attribute__((swift_name("init(allowCustomAmount:presetAmounts:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedUserReloadConfiguration *)doCopyAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedUserPresetReloadAmounts *> *)presetAmounts __attribute__((swift_name("doCopy(allowCustomAmount:presetAmounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoReloadConfiguration")))
@interface AnsaSharedAutoReloadConfiguration : AnsaSharedBase
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString * _Nullable paymentMethodId __attribute__((swift_name("paymentMethodId")));
@property (readonly) AnsaSharedInt * _Nullable reloadAmount __attribute__((swift_name("reloadAmount")));
@property (readonly) AnsaSharedInt * _Nullable reloadThreshold __attribute__((swift_name("reloadThreshold")));
- (instancetype)initWithEnabled:(BOOL)enabled paymentMethodId:(NSString * _Nullable)paymentMethodId reloadAmount:(AnsaSharedInt * _Nullable)reloadAmount reloadThreshold:(AnsaSharedInt * _Nullable)reloadThreshold __attribute__((swift_name("init(enabled:paymentMethodId:reloadAmount:reloadThreshold:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAutoReloadConfiguration *)doCopyEnabled:(BOOL)enabled paymentMethodId:(NSString * _Nullable)paymentMethodId reloadAmount:(AnsaSharedInt * _Nullable)reloadAmount reloadThreshold:(AnsaSharedInt * _Nullable)reloadThreshold __attribute__((swift_name("doCopy(enabled:paymentMethodId:reloadAmount:reloadThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoReloadConfigurationRequest")))
@interface AnsaSharedAutoReloadConfigurationRequest : AnsaSharedBase
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) id<AnsaSharedAutoReloadConfigurationStatus> status __attribute__((swift_name("status")));
- (instancetype)initWithCustomerId:(NSString *)customerId status:(id<AnsaSharedAutoReloadConfigurationStatus>)status __attribute__((swift_name("init(customerId:status:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAutoReloadConfigurationRequest *)doCopyCustomerId:(NSString *)customerId status:(id<AnsaSharedAutoReloadConfigurationStatus>)status __attribute__((swift_name("doCopy(customerId:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AutoReloadConfigurationStatus")))
@protocol AnsaSharedAutoReloadConfigurationStatus
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoReloadConfigurationStatusDisabled")))
@interface AnsaSharedAutoReloadConfigurationStatusDisabled : AnsaSharedBase <AnsaSharedAutoReloadConfigurationStatus>
@property (class, readonly, getter=shared) AnsaSharedAutoReloadConfigurationStatusDisabled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disabled __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoReloadConfigurationStatusEnabled")))
@interface AnsaSharedAutoReloadConfigurationStatusEnabled : AnsaSharedBase <AnsaSharedAutoReloadConfigurationStatus>
@property (readonly) NSString *paymentMethodId __attribute__((swift_name("paymentMethodId")));
@property (readonly) int32_t reloadAmount __attribute__((swift_name("reloadAmount")));
@property (readonly) int32_t reloadThreshold __attribute__((swift_name("reloadThreshold")));
- (instancetype)initWithPaymentMethodId:(NSString *)paymentMethodId reloadAmount:(int32_t)reloadAmount reloadThreshold:(int32_t)reloadThreshold __attribute__((swift_name("init(paymentMethodId:reloadAmount:reloadThreshold:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAutoReloadConfigurationStatusEnabled *)doCopyPaymentMethodId:(NSString *)paymentMethodId reloadAmount:(int32_t)reloadAmount reloadThreshold:(int32_t)reloadThreshold __attribute__((swift_name("doCopy(paymentMethodId:reloadAmount:reloadThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Balance")))
@interface AnsaSharedBalance : AnsaSharedBase
@property (readonly) int64_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
- (instancetype)initWithAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedBalance *)doCopyAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BalanceUpdate")))
@interface AnsaSharedBalanceUpdate : AnsaSharedBase
@property (readonly) AnsaSharedBalance *currentBalance __attribute__((swift_name("currentBalance")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
- (instancetype)initWithCurrentBalance:(AnsaSharedBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("init(currentBalance:label:timestamp:transactionId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedBalanceUpdate *)doCopyCurrentBalance:(AnsaSharedBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(currentBalance:label:timestamp:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddBalanceRequest")))
@interface AnsaSharedAddBalanceRequest : AnsaSharedBase
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *ansaPaymentMethodId __attribute__((swift_name("ansaPaymentMethodId")));
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable metadata __attribute__((swift_name("metadata")));
- (instancetype)initWithCustomerId:(NSString *)customerId amount:(int32_t)amount ansaPaymentMethodId:(NSString *)ansaPaymentMethodId label:(NSString * _Nullable)label metadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata __attribute__((swift_name("init(customerId:amount:ansaPaymentMethodId:label:metadata:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddBalanceRequest *)doCopyCustomerId:(NSString *)customerId amount:(int32_t)amount ansaPaymentMethodId:(NSString *)ansaPaymentMethodId label:(NSString * _Nullable)label metadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata __attribute__((swift_name("doCopy(customerId:amount:ansaPaymentMethodId:label:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseBalanceRequest")))
@interface AnsaSharedUseBalanceRequest : AnsaSharedBase
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable metadata __attribute__((swift_name("metadata")));
- (instancetype)initWithCustomerId:(NSString *)customerId amount:(int32_t)amount label:(NSString * _Nullable)label metadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata __attribute__((swift_name("init(customerId:amount:label:metadata:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedUseBalanceRequest *)doCopyCustomerId:(NSString *)customerId amount:(int32_t)amount label:(NSString * _Nullable)label metadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata __attribute__((swift_name("doCopy(customerId:amount:label:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingDetails")))
@interface AnsaSharedBillingDetails : AnsaSharedBase
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
- (instancetype)initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("init(firstName:lastName:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedBillingDetails *)doCopyFirstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("doCopy(firstName:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CustomerRepository")))
@protocol AnsaSharedCustomerRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addBalanceRequest:(AnsaSharedAddBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedBalanceUpdate *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addBalance(request:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPaymentMethodCustomerId:(NSString *)customerId paymentMethodType:(id<AnsaSharedAddPaymentMethodTypeKmp>)paymentMethodType idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedPaymentMethod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPaymentMethod(customerId:paymentMethodType:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePaymentMethodCustomerId:(NSString *)customerId paymentMethodId:(NSString *)paymentMethodId idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deletePaymentMethod(customerId:paymentMethodId:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAutoReloadConfigurationCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedAutoReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAutoReloadConfiguration(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCustomerCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedCustomer *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCustomer(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentMethodsCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedPaymentMethodCollection *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentMethods(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReloadConfigCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedUserReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReloadConfig(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionsCustomerId:(NSString *)customerId cursor:(NSString * _Nullable)cursor completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedTransactionResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactions(customerId:cursor:completionHandler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreFlow>)observeCustomerCustomerId:(NSString *)customerId __attribute__((swift_name("observeCustomer(customerId:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAutoReloadConfigurationRequest:(AnsaSharedAutoReloadConfigurationRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedAutoReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAutoReloadConfiguration(request:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)useBalanceRequest:(AnsaSharedUseBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedBalanceUpdate *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("useBalance(request:idempotencyKey:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodRequest")))
@interface AnsaSharedAddPaymentMethodRequest : AnsaSharedBase
@property (readonly) NSString *cardNumber __attribute__((swift_name("cardNumber")));
@property (readonly) NSString *customerId __attribute__((swift_name("customerId")));
@property (readonly) NSString *cvc __attribute__((swift_name("cvc")));
@property (readonly) int32_t expirationMonth __attribute__((swift_name("expirationMonth")));
@property (readonly) int32_t expirationYear __attribute__((swift_name("expirationYear")));
- (instancetype)initWithCustomerId:(NSString *)customerId cardNumber:(NSString *)cardNumber expirationMonth:(int32_t)expirationMonth expirationYear:(int32_t)expirationYear cvc:(NSString *)cvc __attribute__((swift_name("init(customerId:cardNumber:expirationMonth:expirationYear:cvc:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodRequest *)doCopyCustomerId:(NSString *)customerId cardNumber:(NSString *)cardNumber expirationMonth:(int32_t)expirationMonth expirationYear:(int32_t)expirationYear cvc:(NSString *)cvc __attribute__((swift_name("doCopy(customerId:cardNumber:expirationMonth:expirationYear:cvc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AddPaymentMethodTypeKmp")))
@protocol AnsaSharedAddPaymentMethodTypeKmp
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodTypeKmpApplePay")))
@interface AnsaSharedAddPaymentMethodTypeKmpApplePay : AnsaSharedBase <AnsaSharedAddPaymentMethodTypeKmp>
@property (readonly) NSString *paymentData __attribute__((swift_name("paymentData")));
- (instancetype)initWithPaymentData:(NSString *)paymentData __attribute__((swift_name("init(paymentData:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodTypeKmpApplePay *)doCopyPaymentData:(NSString *)paymentData __attribute__((swift_name("doCopy(paymentData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodTypeKmpCreditCard")))
@interface AnsaSharedAddPaymentMethodTypeKmpCreditCard : AnsaSharedBase <AnsaSharedAddPaymentMethodTypeKmp>
@property (readonly) NSString *token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodTypeKmpCreditCard *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodTypeKmpGooglePay")))
@interface AnsaSharedAddPaymentMethodTypeKmpGooglePay : AnsaSharedBase <AnsaSharedAddPaymentMethodTypeKmp>
@property (readonly) NSString *paymentData __attribute__((swift_name("paymentData")));
- (instancetype)initWithPaymentData:(NSString *)paymentData __attribute__((swift_name("init(paymentData:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodTypeKmpGooglePay *)doCopyPaymentData:(NSString *)paymentData __attribute__((swift_name("doCopy(paymentData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodTypeKmpSquare")))
@interface AnsaSharedAddPaymentMethodTypeKmpSquare : AnsaSharedBase <AnsaSharedAddPaymentMethodTypeKmp>
@property (readonly) NSString *cardNonce __attribute__((swift_name("cardNonce")));
- (instancetype)initWithCardNonce:(NSString *)cardNonce __attribute__((swift_name("init(cardNonce:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodTypeKmpSquare *)doCopyCardNonce:(NSString *)cardNonce __attribute__((swift_name("doCopy(cardNonce:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodTypeKmpStripe")))
@interface AnsaSharedAddPaymentMethodTypeKmpStripe : AnsaSharedBase <AnsaSharedAddPaymentMethodTypeKmp>
@property (readonly) NSString *paymentMethodId __attribute__((swift_name("paymentMethodId")));
- (instancetype)initWithPaymentMethodId:(NSString *)paymentMethodId __attribute__((swift_name("init(paymentMethodId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAddPaymentMethodTypeKmpStripe *)doCopyPaymentMethodId:(NSString *)paymentMethodId __attribute__((swift_name("doCopy(paymentMethodId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card")))
@interface AnsaSharedCard : AnsaSharedBase
@property (readonly) NSString *brand __attribute__((swift_name("brand")));
@property (readonly) NSString *fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) NSString *firstSix __attribute__((swift_name("firstSix")));
@property (readonly) NSString *lastFour __attribute__((swift_name("lastFour")));
- (instancetype)initWithBrand:(NSString *)brand fingerprint:(NSString *)fingerprint firstSix:(NSString *)firstSix lastFour:(NSString *)lastFour __attribute__((swift_name("init(brand:fingerprint:firstSix:lastFour:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCard *)doCopyBrand:(NSString *)brand fingerprint:(NSString *)fingerprint firstSix:(NSString *)firstSix lastFour:(NSString *)lastFour __attribute__((swift_name("doCopy(brand:fingerprint:firstSix:lastFour:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod")))
@interface AnsaSharedPaymentMethod : AnsaSharedBase
@property (readonly) AnsaSharedCard *card __attribute__((swift_name("card")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithCard:(AnsaSharedCard *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(card:id:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentMethod *)doCopyCard:(AnsaSharedCard *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(card:id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodCollection")))
@interface AnsaSharedPaymentMethodCollection : AnsaSharedBase
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSArray<AnsaSharedPaymentMethod *> *paymentMethods __attribute__((swift_name("paymentMethods")));
- (instancetype)initWithCount:(int32_t)count paymentMethods:(NSArray<AnsaSharedPaymentMethod *> *)paymentMethods __attribute__((swift_name("init(count:paymentMethods:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentMethodCollection *)doCopyCount:(int32_t)count paymentMethods:(NSArray<AnsaSharedPaymentMethod *> *)paymentMethods __attribute__((swift_name("doCopy(count:paymentMethods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AnsaSharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AnsaSharedKotlinEnum<E> : AnsaSharedBase <AnsaSharedKotlinComparable>
@property (class, readonly, getter=companion) AnsaSharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BalanceAdjustment")))
@interface AnsaSharedBalanceAdjustment : AnsaSharedKotlinEnum<AnsaSharedBalanceAdjustment *>
@property (class, readonly) AnsaSharedBalanceAdjustment *debit __attribute__((swift_name("debit")));
@property (class, readonly) AnsaSharedBalanceAdjustment *credit __attribute__((swift_name("credit")));
@property (class, readonly) AnsaSharedBalanceAdjustment *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<AnsaSharedBalanceAdjustment *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedBalanceAdjustment *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface AnsaSharedTransaction : AnsaSharedBase
@property (readonly) AnsaSharedBalanceAdjustment *adjustment __attribute__((swift_name("adjustment")));
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *from __attribute__((swift_name("from")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) AnsaSharedBoolean * _Nullable isCredit __attribute__((swift_name("isCredit")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSDictionary<NSString *, AnsaSharedKotlinx_serialization_jsonJsonElement *> *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString * _Nullable paymentMethodId __attribute__((swift_name("paymentMethodId")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@property (readonly) AnsaSharedTransactionSource * _Nullable source __attribute__((swift_name("source")));
@property (readonly) NSString *to __attribute__((swift_name("to")));
@property (readonly) AnsaSharedTransactionType *type __attribute__((swift_name("type")));
- (instancetype)initWithId:(NSString *)id type:(AnsaSharedTransactionType *)type amount:(int32_t)amount created:(NSString *)created source:(AnsaSharedTransactionSource * _Nullable)source paymentMethodId:(NSString * _Nullable)paymentMethodId reason:(NSString * _Nullable)reason from:(NSString *)from to:(NSString *)to metadata:(NSDictionary<NSString *, AnsaSharedKotlinx_serialization_jsonJsonElement *> *)metadata label:(NSString * _Nullable)label displayName:(NSString *)displayName isCredit:(AnsaSharedBoolean * _Nullable)isCredit __attribute__((swift_name("init(id:type:amount:created:source:paymentMethodId:reason:from:to:metadata:label:displayName:isCredit:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedTransaction *)doCopyId:(NSString *)id type:(AnsaSharedTransactionType *)type amount:(int32_t)amount created:(NSString *)created source:(AnsaSharedTransactionSource * _Nullable)source paymentMethodId:(NSString * _Nullable)paymentMethodId reason:(NSString * _Nullable)reason from:(NSString *)from to:(NSString *)to metadata:(NSDictionary<NSString *, AnsaSharedKotlinx_serialization_jsonJsonElement *> *)metadata label:(NSString * _Nullable)label displayName:(NSString *)displayName isCredit:(AnsaSharedBoolean * _Nullable)isCredit __attribute__((swift_name("doCopy(id:type:amount:created:source:paymentMethodId:reason:from:to:metadata:label:displayName:isCredit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionResult")))
@interface AnsaSharedTransactionResult : AnsaSharedBase
@property (readonly) NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@property (readonly) NSArray<AnsaSharedTransaction *> *transactions __attribute__((swift_name("transactions")));
- (instancetype)initWithNextCursor:(NSString * _Nullable)nextCursor transactions:(NSArray<AnsaSharedTransaction *> *)transactions __attribute__((swift_name("init(nextCursor:transactions:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedTransactionResult *)doCopyNextCursor:(NSString * _Nullable)nextCursor transactions:(NSArray<AnsaSharedTransaction *> *)transactions __attribute__((swift_name("doCopy(nextCursor:transactions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("TransactionSource")))
@interface AnsaSharedTransactionSource : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedTransactionSourceCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.AddBalance")))
@interface AnsaSharedTransactionSourceAddBalance : AnsaSharedTransactionSource
@property (class, readonly, getter=shared) AnsaSharedTransactionSourceAddBalance *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addBalance __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.AutoReload")))
@interface AnsaSharedTransactionSourceAutoReload : AnsaSharedTransactionSource
@property (class, readonly, getter=shared) AnsaSharedTransactionSourceAutoReload *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)autoReload __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.Companion")))
@interface AnsaSharedTransactionSourceCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedTransactionSourceCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedTransactionSource *)fromNameName:(NSString * _Nullable)name __attribute__((swift_name("fromName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.Unknown")))
@interface AnsaSharedTransactionSourceUnknown : AnsaSharedTransactionSource
- (instancetype)initWithRaw:(NSString *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedTransactionSourceUnknown *)doCopyRaw:(NSString *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.UseBalance")))
@interface AnsaSharedTransactionSourceUseBalance : AnsaSharedTransactionSource
@property (class, readonly, getter=shared) AnsaSharedTransactionSourceUseBalance *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)useBalance __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSource.UseBalanceAndReload")))
@interface AnsaSharedTransactionSourceUseBalanceAndReload : AnsaSharedTransactionSource
@property (class, readonly, getter=shared) AnsaSharedTransactionSourceUseBalanceAndReload *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)useBalanceAndReload __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("TransactionType")))
@interface AnsaSharedTransactionType : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedTransactionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) AnsaSharedBoolean * _Nullable isCredit __attribute__((swift_name("isCredit")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.AddBalance")))
@interface AnsaSharedTransactionTypeAddBalance : AnsaSharedTransactionType
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeAddBalance *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addBalance __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.Companion")))
@interface AnsaSharedTransactionTypeCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedTransactionType *)fromNameName:(NSString *)name __attribute__((swift_name("fromName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.MerchantAddPromo")))
@interface AnsaSharedTransactionTypeMerchantAddPromo : AnsaSharedTransactionType
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeMerchantAddPromo *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)merchantAddPromo __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.MerchantRefund")))
@interface AnsaSharedTransactionTypeMerchantRefund : AnsaSharedTransactionType
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeMerchantRefund *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)merchantRefund __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.RefundPaymentMethod")))
@interface AnsaSharedTransactionTypeRefundPaymentMethod : AnsaSharedTransactionType
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeRefundPaymentMethod *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refundPaymentMethod __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.Unknown")))
@interface AnsaSharedTransactionTypeUnknown : AnsaSharedTransactionType
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
- (instancetype)initWithRaw:(NSString *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedTransactionTypeUnknown *)doCopyRaw:(NSString *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.UseBalance")))
@interface AnsaSharedTransactionTypeUseBalance : AnsaSharedTransactionType
@property (class, readonly, getter=shared) AnsaSharedTransactionTypeUseBalance *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)useBalance __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("AnsaLogger")))
@protocol AnsaSharedAnsaLogger
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message error:(AnsaSharedKotlinThrowable * _Nullable)error __attribute__((swift_name("error(message:error:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warningMessage:(NSString *)message __attribute__((swift_name("warning(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface AnsaSharedLogLevel : AnsaSharedKotlinEnum<AnsaSharedLogLevel *>
@property (class, readonly) AnsaSharedLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) AnsaSharedLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) AnsaSharedLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) AnsaSharedLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) AnsaSharedLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) AnsaSharedLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) NSArray<AnsaSharedLogLevel *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedLogLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppReloadConfiguration")))
@interface AnsaSharedAppReloadConfiguration : AnsaSharedBase
@property (readonly) BOOL allowCustomAmount __attribute__((swift_name("allowCustomAmount")));
@property (readonly) NSArray<AnsaSharedPresetReloadAmounts *> *presetAmounts __attribute__((swift_name("presetAmounts")));
- (instancetype)initWithAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedPresetReloadAmounts *> *)presetAmounts __attribute__((swift_name("init(allowCustomAmount:presetAmounts:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAppReloadConfiguration *)doCopyAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedPresetReloadAmounts *> *)presetAmounts __attribute__((swift_name("doCopy(allowCustomAmount:presetAmounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant")))
@interface AnsaSharedMerchant : AnsaSharedBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) AnsaSharedMerchantMetadata *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name metadata:(AnsaSharedMerchantMetadata *)metadata __attribute__((swift_name("init(id:name:metadata:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant *)doCopyId:(NSString *)id name:(NSString *)name metadata:(AnsaSharedMerchantMetadata *)metadata __attribute__((swift_name("doCopy(id:name:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MerchantAutoReloadConfiguration")))
@interface AnsaSharedMerchantAutoReloadConfiguration : AnsaSharedBase
@property (readonly) int32_t maximumAutoReloadAmount __attribute__((swift_name("maximumAutoReloadAmount")));
@property (readonly) int32_t minimumAutoReloadAmount __attribute__((swift_name("minimumAutoReloadAmount")));
@property (readonly) int32_t minimumAutoReloadThreshold __attribute__((swift_name("minimumAutoReloadThreshold")));
- (instancetype)initWithMaximumAutoReloadAmount:(int32_t)maximumAutoReloadAmount minimumAutoReloadAmount:(int32_t)minimumAutoReloadAmount minimumAutoReloadThreshold:(int32_t)minimumAutoReloadThreshold __attribute__((swift_name("init(maximumAutoReloadAmount:minimumAutoReloadAmount:minimumAutoReloadThreshold:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchantAutoReloadConfiguration *)doCopyMaximumAutoReloadAmount:(int32_t)maximumAutoReloadAmount minimumAutoReloadAmount:(int32_t)minimumAutoReloadAmount minimumAutoReloadThreshold:(int32_t)minimumAutoReloadThreshold __attribute__((swift_name("doCopy(maximumAutoReloadAmount:minimumAutoReloadAmount:minimumAutoReloadThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MerchantBasisTheoryInfo")))
@interface AnsaSharedMerchantBasisTheoryInfo : AnsaSharedBase
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
- (instancetype)initWithApiKey:(NSString *)apiKey __attribute__((swift_name("init(apiKey:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchantBasisTheoryInfo *)doCopyApiKey:(NSString *)apiKey __attribute__((swift_name("doCopy(apiKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MerchantCartArtInfo")))
@interface AnsaSharedMerchantCartArtInfo : AnsaSharedBase
@property (readonly) NSArray<NSString *> *cartArtUrls __attribute__((swift_name("cartArtUrls")));
- (instancetype)initWithCartArtUrls:(NSArray<NSString *> *)cartArtUrls __attribute__((swift_name("init(cartArtUrls:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchantCartArtInfo *)doCopyCartArtUrls:(NSArray<NSString *> *)cartArtUrls __attribute__((swift_name("doCopy(cartArtUrls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MerchantMetadata")))
@interface AnsaSharedMerchantMetadata : AnsaSharedBase
@property (readonly) AnsaSharedAppReloadConfiguration *appReloadConfiguration __attribute__((swift_name("appReloadConfiguration")));
@property (readonly) AnsaSharedMerchantAutoReloadConfiguration *autoReloadConfiguration __attribute__((swift_name("autoReloadConfiguration")));
@property (readonly) NSString * _Nullable omsProvider __attribute__((swift_name("omsProvider")));
@property (readonly) NSString * _Nullable paymentProcessor __attribute__((swift_name("paymentProcessor")));
@property (readonly) AnsaSharedPromotions *promotions __attribute__((swift_name("promotions")));
@property (readonly) AnsaSharedUserReferralConfiguration *userReferralConfiguration __attribute__((swift_name("userReferralConfiguration")));
- (instancetype)initWithAppReloadConfiguration:(AnsaSharedAppReloadConfiguration *)appReloadConfiguration autoReloadConfiguration:(AnsaSharedMerchantAutoReloadConfiguration *)autoReloadConfiguration omsProvider:(NSString * _Nullable)omsProvider paymentProcessor:(NSString * _Nullable)paymentProcessor promotions:(AnsaSharedPromotions *)promotions userReferralConfiguration:(AnsaSharedUserReferralConfiguration *)userReferralConfiguration __attribute__((swift_name("init(appReloadConfiguration:autoReloadConfiguration:omsProvider:paymentProcessor:promotions:userReferralConfiguration:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchantMetadata *)doCopyAppReloadConfiguration:(AnsaSharedAppReloadConfiguration *)appReloadConfiguration autoReloadConfiguration:(AnsaSharedMerchantAutoReloadConfiguration *)autoReloadConfiguration omsProvider:(NSString * _Nullable)omsProvider paymentProcessor:(NSString * _Nullable)paymentProcessor promotions:(AnsaSharedPromotions *)promotions userReferralConfiguration:(AnsaSharedUserReferralConfiguration *)userReferralConfiguration __attribute__((swift_name("doCopy(appReloadConfiguration:autoReloadConfiguration:omsProvider:paymentProcessor:promotions:userReferralConfiguration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresetReloadAmounts")))
@interface AnsaSharedPresetReloadAmounts : AnsaSharedBase
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isMostPopular __attribute__((swift_name("isMostPopular")));
- (instancetype)initWithAmount:(int32_t)amount id:(NSString *)id isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("init(amount:id:isMostPopular:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPresetReloadAmounts *)doCopyAmount:(int32_t)amount id:(NSString *)id isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("doCopy(amount:id:isMostPopular:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Promotions")))
@interface AnsaSharedPromotions : AnsaSharedBase
@property (readonly) NSArray<AnsaSharedRewardTier *> *tiers __attribute__((swift_name("tiers")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithTiers:(NSArray<AnsaSharedRewardTier *> *)tiers type:(NSString *)type __attribute__((swift_name("init(tiers:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPromotions *)doCopyTiers:(NSArray<AnsaSharedRewardTier *> *)tiers type:(NSString *)type __attribute__((swift_name("doCopy(tiers:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RewardTier")))
@interface AnsaSharedRewardTier : AnsaSharedBase
@property (readonly) int32_t minTransactionRequirement __attribute__((swift_name("minTransactionRequirement")));
@property (readonly) int32_t promotionAmount __attribute__((swift_name("promotionAmount")));
- (instancetype)initWithMinTransactionRequirement:(int32_t)minTransactionRequirement promotionAmount:(int32_t)promotionAmount __attribute__((swift_name("init(minTransactionRequirement:promotionAmount:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedRewardTier *)doCopyMinTransactionRequirement:(int32_t)minTransactionRequirement promotionAmount:(int32_t)promotionAmount __attribute__((swift_name("doCopy(minTransactionRequirement:promotionAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserReferralConfiguration")))
@interface AnsaSharedUserReferralConfiguration : AnsaSharedBase
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) int32_t recipientCreditAmount __attribute__((swift_name("recipientCreditAmount")));
@property (readonly) NSString *redemptionEvent __attribute__((swift_name("redemptionEvent")));
@property (readonly) int32_t redemptionThresholdAmount __attribute__((swift_name("redemptionThresholdAmount")));
@property (readonly) int32_t senderCreditAmount __attribute__((swift_name("senderCreditAmount")));
- (instancetype)initWithEnabled:(BOOL)enabled recipientCreditAmount:(int32_t)recipientCreditAmount redemptionEvent:(NSString *)redemptionEvent redemptionThresholdAmount:(int32_t)redemptionThresholdAmount senderCreditAmount:(int32_t)senderCreditAmount __attribute__((swift_name("init(enabled:recipientCreditAmount:redemptionEvent:redemptionThresholdAmount:senderCreditAmount:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedUserReferralConfiguration *)doCopyEnabled:(BOOL)enabled recipientCreditAmount:(int32_t)recipientCreditAmount redemptionEvent:(NSString *)redemptionEvent redemptionThresholdAmount:(int32_t)redemptionThresholdAmount senderCreditAmount:(int32_t)senderCreditAmount __attribute__((swift_name("doCopy(enabled:recipientCreditAmount:redemptionEvent:redemptionThresholdAmount:senderCreditAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("MerchantRepository")))
@protocol AnsaSharedMerchantRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBasisTheoryApiKeyMerchantId:(NSString *)merchantId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchantBasisTheoryInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBasisTheoryApiKey(merchantId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMerchantMerchantId:(NSString *)merchantId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchant *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMerchant(merchantId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVirtualCardArtWithCompletionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchantCartArtInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVirtualCardArt(completionHandler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreFlow>)observeMerchantMerchantId:(NSString *)merchantId __attribute__((swift_name("observeMerchant(merchantId:)")));
@end

__attribute__((swift_name("ApiResult")))
@interface AnsaSharedApiResult<__covariant T> : AnsaSharedBase
@end

__attribute__((swift_name("ApiResultError")))
@interface AnsaSharedApiResultError : AnsaSharedApiResult<AnsaSharedKotlinNothing *>
@property (readonly) AnsaSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *exceptionMessage __attribute__((swift_name("exceptionMessage")));
@property (readonly) NSString *humanReadableMessage __attribute__((swift_name("humanReadableMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResultError.GenericError")))
@interface AnsaSharedApiResultErrorGenericError : AnsaSharedApiResultError
@property (readonly) AnsaSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *exceptionMessage __attribute__((swift_name("exceptionMessage")));
@property (readonly) NSString *humanReadableMessage __attribute__((swift_name("humanReadableMessage")));
- (instancetype)initWithException:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("init(exception:humanReadableMessage:exceptionMessage:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedApiResultErrorGenericError *)doCopyException:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("doCopy(exception:humanReadableMessage:exceptionMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResultError.HttpError")))
@interface AnsaSharedApiResultErrorHttpError : AnsaSharedApiResultError
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) AnsaSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *exceptionMessage __attribute__((swift_name("exceptionMessage")));
@property (readonly) NSString *humanReadableMessage __attribute__((swift_name("humanReadableMessage")));
@property (readonly) AnsaSharedHttpErrorResponse * _Nullable responseBody __attribute__((swift_name("responseBody")));
- (instancetype)initWithCode:(int32_t)code responseBody:(AnsaSharedHttpErrorResponse * _Nullable)responseBody exception:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("init(code:responseBody:exception:humanReadableMessage:exceptionMessage:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedApiResultErrorHttpError *)doCopyCode:(int32_t)code responseBody:(AnsaSharedHttpErrorResponse * _Nullable)responseBody exception:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("doCopy(code:responseBody:exception:humanReadableMessage:exceptionMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResultError.SerializationError")))
@interface AnsaSharedApiResultErrorSerializationError : AnsaSharedApiResultError
@property (readonly) AnsaSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *exceptionMessage __attribute__((swift_name("exceptionMessage")));
@property (readonly) NSString *humanReadableMessage __attribute__((swift_name("humanReadableMessage")));
- (instancetype)initWithException:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("init(exception:humanReadableMessage:exceptionMessage:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedApiResultErrorSerializationError *)doCopyException:(AnsaSharedKotlinThrowable *)exception humanReadableMessage:(NSString *)humanReadableMessage exceptionMessage:(NSString *)exceptionMessage __attribute__((swift_name("doCopy(exception:humanReadableMessage:exceptionMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResultSuccess")))
@interface AnsaSharedApiResultSuccess<__covariant T> : AnsaSharedApiResult<T>
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(T)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedApiResultSuccess<T> *)doCopyValue:(T)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ClientSecretProviderIos")))
@protocol AnsaSharedClientSecretProviderIos
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)provideClientSecretAnsaCustomerId:(NSString *)ansaCustomerId completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("provideClientSecret(ansaCustomerId:completionHandler:)")));
@end

__attribute__((swift_name("AuthSessionManager")))
@protocol AnsaSharedAuthSessionManager
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValidSessionOrNullAnsaCustomerId:(NSString *)ansaCustomerId completionHandler:(void (^)(AnsaSharedPaymentSession * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getValidSessionOrNull(ansaCustomerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshSessionWithCompletionHandler:(void (^)(AnsaSharedPaymentSession * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshSession(completionHandler:)")));
@end

__attribute__((swift_name("AuthType")))
@protocol AnsaSharedAuthType
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTypeClientSecret")))
@interface AnsaSharedAuthTypeClientSecret : AnsaSharedBase <AnsaSharedAuthType>
@property (readonly) NSString *ansaCustomerId __attribute__((swift_name("ansaCustomerId")));
- (instancetype)initWithAnsaCustomerId:(NSString *)ansaCustomerId __attribute__((swift_name("init(ansaCustomerId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedAuthTypeClientSecret *)doCopyAnsaCustomerId:(NSString *)ansaCustomerId __attribute__((swift_name("doCopy(ansaCustomerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTypeNone")))
@interface AnsaSharedAuthTypeNone : AnsaSharedBase <AnsaSharedAuthType>
@property (class, readonly, getter=shared) AnsaSharedAuthTypeNone *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTypePublishableKey")))
@interface AnsaSharedAuthTypePublishableKey : AnsaSharedBase <AnsaSharedAuthType>
@property (class, readonly, getter=shared) AnsaSharedAuthTypePublishableKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)publishableKey __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpErrorResponse")))
@interface AnsaSharedHttpErrorResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedHttpErrorResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message type:(NSString * _Nullable)type __attribute__((swift_name("init(code:message:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedHttpErrorResponse *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(code:message:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpErrorResponse.Companion")))
@interface AnsaSharedHttpErrorResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedHttpErrorResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface AnsaSharedKotlinThrowable : AnsaSharedBase
@property (readonly) AnsaSharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (AnsaSharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface AnsaSharedKotlinException : AnsaSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface AnsaSharedKotlinRuntimeException : AnsaSharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AnsaSharedKotlinIllegalStateException : AnsaSharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_client_coreResponseException")))
@interface AnsaSharedKtor_client_coreResponseException : AnsaSharedKotlinIllegalStateException
@property (readonly) AnsaSharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
- (instancetype)initWithResponse:(AnsaSharedKtor_client_coreHttpResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Please, provide response text in constructor")));
- (instancetype)initWithResponse:(AnsaSharedKtor_client_coreHttpResponse *)response cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:cachedResponseText:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpExceptions")))
@interface AnsaSharedHttpExceptions : AnsaSharedKtor_client_coreResponseException
@property (readonly) NSString *message __attribute__((swift_name("message")));
- (instancetype)initWithResponse:(AnsaSharedKtor_client_coreHttpResponse *)response failureReason:(NSString * _Nullable)failureReason cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:failureReason:cachedResponseText:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithResponse:(AnsaSharedKtor_client_coreHttpResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithResponse:(AnsaSharedKtor_client_coreHttpResponse *)response cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:cachedResponseText:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorProvider")))
@interface AnsaSharedKtorProvider : AnsaSharedBase
@property (readonly) AnsaSharedKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
- (instancetype)initWithHttpClient:(AnsaSharedKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(httpClient:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtorProvider *)doCopyHttpClient:(AnsaSharedKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("doCopy(httpClient:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorWrapper")))
@interface AnsaSharedKtorWrapper : AnsaSharedBase
@property (readonly) id<AnsaSharedAuthSessionManager> authSessionManager __attribute__((swift_name("authSessionManager")));
@property (readonly) AnsaSharedKtorProvider *ktorProvider __attribute__((swift_name("ktorProvider")));
@property (readonly) NSString *merchantPublishableKey __attribute__((swift_name("merchantPublishableKey")));
- (instancetype)initWithKtorProvider:(AnsaSharedKtorProvider *)ktorProvider authSessionManager:(id<AnsaSharedAuthSessionManager>)authSessionManager merchantPublishableKey:(NSString *)merchantPublishableKey __attribute__((swift_name("init(ktorProvider:authSessionManager:merchantPublishableKey:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteResultResource:(id)resource authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteResult(resource:authType:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResultResource:(id)resource authType:(id<AnsaSharedAuthType>)authType builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResult(resource:authType:builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)handleAuth:(AnsaSharedKtor_client_coreHttpRequestBuilder *)receiver authType:(id<AnsaSharedAuthType>)authType completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("handleAuth(_:authType:completionHandler:)")));
- (void)handleIdempotency:(AnsaSharedKtor_client_coreHttpRequestBuilder *)receiver providedKey:(NSString * _Nullable)providedKey __attribute__((swift_name("handleIdempotency(_:providedKey:)")));
- (void)handleUserAgent:(AnsaSharedKtor_client_coreHttpRequestBuilder *)receiver __attribute__((swift_name("handleUserAgent(_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postResultResource:(id)resource body:(id _Nullable)body authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postResult(resource:body:authType:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postResultUrl:(NSString *)url body:(id _Nullable)body authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postResult(url:body:authType:idempotencyKey:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType")))
@interface AnsaSharedNetworkType : AnsaSharedKotlinEnum<AnsaSharedNetworkType *>
@property (class, readonly, getter=companion) AnsaSharedNetworkTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnsaSharedNetworkType *sandbox __attribute__((swift_name("sandbox")));
@property (class, readonly) AnsaSharedNetworkType *staging __attribute__((swift_name("staging")));
@property (class, readonly) AnsaSharedNetworkType *production __attribute__((swift_name("production")));
@property (class, readonly) NSArray<AnsaSharedNetworkType *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedNetworkType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType.Companion")))
@interface AnsaSharedNetworkTypeCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedNetworkTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedNetworkType *)fromPublishableKeyKey:(NSString *)key __attribute__((swift_name("fromPublishableKey(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentSession")))
@interface AnsaSharedPaymentSession : AnsaSharedBase
@property (readonly) NSString *ansaCustomerId __attribute__((swift_name("ansaCustomerId")));
@property (readonly) NSString *clientSecret __attribute__((swift_name("clientSecret")));
- (instancetype)initWithClientSecret:(NSString *)clientSecret ansaCustomerId:(NSString *)ansaCustomerId __attribute__((swift_name("init(clientSecret:ansaCustomerId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentSession *)doCopyClientSecret:(NSString *)clientSecret ansaCustomerId:(NSString *)ansaCustomerId __attribute__((swift_name("doCopy(clientSecret:ansaCustomerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface AnsaSharedKmpAppComponentCompanion (Extensions)
- (AnsaSharedKmpAppComponent *)createPublishableKey:(NSString *)publishableKey clientSecretProvider:(id<AnsaSharedClientSecretProviderIos>)clientSecretProvider logger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("create(publishableKey:clientSecretProvider:logger:)")));
@end

@interface AnsaSharedApiResult (Extensions)
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (AnsaSharedApiResult<id> *)mapTransform:(id _Nullable (^)(id))transform __attribute__((swift_name("map(transform:)")));
- (AnsaSharedApiResult<id> *)onErrorBlock:(void (^)(AnsaSharedKotlinThrowable *))block __attribute__((swift_name("onError(block:)")));
- (AnsaSharedApiResult<id> *)onSuccessBlock:(void (^)(id))block __attribute__((swift_name("onSuccess(block:)")));
@end

@interface AnsaSharedNetworkType (Extensions)
- (NSString *)virtualCardArtUrlId:(NSString *)id __attribute__((swift_name("virtualCardArtUrl(id:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AnsaSharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AnsaSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AnsaSharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface AnsaSharedKtor_client_coreHttpClient : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreCoroutineScope, AnsaSharedKtor_ioCloseable>
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AnsaSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<AnsaSharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) AnsaSharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) AnsaSharedKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) AnsaSharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AnsaSharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) AnsaSharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) AnsaSharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
- (instancetype)initWithEngine:(id<AnsaSharedKtor_client_coreHttpClientEngine>)engine userConfig:(AnsaSharedKtor_client_coreHttpClientConfig<AnsaSharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (AnsaSharedKtor_client_coreHttpClient *)configBlock:(void (^)(AnsaSharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<AnsaSharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface AnsaSharedKtor_client_coreHttpClient (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteResultResource:(id)resource builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteResult(resource:builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResultResource:(id)resource builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResult(resource:builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postResultResource:(id)resource body:(id _Nullable)body builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postResult(resource:body:builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postResultUrl:(NSString *)url body:(id _Nullable)body builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postResult(url:body:builder:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol AnsaSharedKtor_httpHttpMessage
@required
@property (readonly) id<AnsaSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface AnsaSharedKtor_client_coreHttpResponse : AnsaSharedBase <AnsaSharedKtor_httpHttpMessage, AnsaSharedKotlinx_coroutines_coreCoroutineScope>
@property (readonly) AnsaSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<AnsaSharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) AnsaSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnsaSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface AnsaSharedKtor_client_coreHttpResponse (Extensions)
@property (readonly) int64_t duration __attribute__((swift_name("duration")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)safeBodyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("safeBody(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientHelpersKt")))
@interface AnsaSharedHttpClientHelpersKt : AnsaSharedBase
@property (class, readonly) NSString *GENERIC_ERROR_MESSAGE __attribute__((swift_name("GENERIC_ERROR_MESSAGE")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)requestCatchingBlock:(AnsaSharedKtor_client_coreHttpResponse *(^)(void))block completionHandler:(void (^)(AnsaSharedApiResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestCatching(block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InjectKmpAppComponentKt")))
@interface AnsaSharedInjectKmpAppComponentKt : AnsaSharedBase
+ (AnsaSharedKmpAppComponent *)create:(id<AnsaSharedKotlinKClass>)receiver publishableKey:(NSString *)publishableKey networkType:(AnsaSharedNetworkType *)networkType clientSecretProvider:(id<AnsaSharedClientSecretProviderIos>)clientSecretProvider logger:(id<AnsaSharedAnsaLogger>)logger __attribute__((swift_name("create(_:publishableKey:networkType:clientSecretProvider:logger:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface AnsaShared__SkieSuspendWrappersKt : AnsaSharedBase
+ (void)Skie_Suspend__0__requestCatchingBlock:(AnsaSharedKtor_client_coreHttpResponse *(^)(void))block suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__requestCatching(block:suspendHandler:)")));
+ (void)Skie_Suspend__10__getCustomerDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__10__getCustomer(dispatchReceiver:customerId:suspendHandler:)")));
+ (void)Skie_Suspend__11__getPaymentMethodsDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__11__getPaymentMethods(dispatchReceiver:customerId:suspendHandler:)")));
+ (void)Skie_Suspend__12__getReloadConfigDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__12__getReloadConfig(dispatchReceiver:customerId:suspendHandler:)")));
+ (void)Skie_Suspend__13__getTransactionsDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId cursor:(NSString * _Nullable)cursor suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__13__getTransactions(dispatchReceiver:customerId:cursor:suspendHandler:)")));
+ (void)Skie_Suspend__14__setAutoReloadConfigurationDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver request:(AnsaSharedAutoReloadConfigurationRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__14__setAutoReloadConfiguration(dispatchReceiver:request:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__15__useBalanceDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver request:(AnsaSharedUseBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__15__useBalance(dispatchReceiver:request:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__16__provideClientSecretDispatchReceiver:(id<AnsaSharedClientSecretProviderIos>)dispatchReceiver ansaCustomerId:(NSString *)ansaCustomerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__16__provideClientSecret(dispatchReceiver:ansaCustomerId:suspendHandler:)")));
+ (void)Skie_Suspend__17__deleteResultDispatchReceiver:(AnsaSharedKtorWrapper *)dispatchReceiver resource:(id)resource authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__17__deleteResult(dispatchReceiver:resource:authType:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__18__getResultDispatchReceiver:(AnsaSharedKtorWrapper *)dispatchReceiver resource:(id)resource authType:(id<AnsaSharedAuthType>)authType builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__18__getResult(dispatchReceiver:resource:authType:builder:suspendHandler:)")));
+ (void)Skie_Suspend__19__postResultDispatchReceiver:(AnsaSharedKtorWrapper *)dispatchReceiver resource:(id)resource body:(id _Nullable)body authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__19__postResult(dispatchReceiver:resource:body:authType:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__1__getBasisTheoryApiKeyDispatchReceiver:(id<AnsaSharedMerchantRepository>)dispatchReceiver merchantId:(NSString *)merchantId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__getBasisTheoryApiKey(dispatchReceiver:merchantId:suspendHandler:)")));
+ (void)Skie_Suspend__20__postResultDispatchReceiver:(AnsaSharedKtorWrapper *)dispatchReceiver url:(NSString *)url body:(id _Nullable)body authType:(id<AnsaSharedAuthType>)authType idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__20__postResult(dispatchReceiver:url:body:authType:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__21__handleAuthDispatchReceiver:(AnsaSharedKtorWrapper *)dispatchReceiver extensionReceiver:(AnsaSharedKtor_client_coreHttpRequestBuilder *)extensionReceiver authType:(id<AnsaSharedAuthType>)authType suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__21__handleAuth(dispatchReceiver:extensionReceiver:authType:suspendHandler:)")));
+ (void)Skie_Suspend__22__joinDispatchReceiver:(id<AnsaSharedKotlinx_coroutines_coreJob>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__22__join(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__23__executeDispatchReceiver:(AnsaSharedKtor_utilsPipeline<id, id> *)dispatchReceiver context:(id)context subject:(id)subject suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__23__execute(dispatchReceiver:context:subject:suspendHandler:)")));
+ (void)Skie_Suspend__24__invokeDispatchReceiver:(id<AnsaSharedKotlinSuspendFunction2>)dispatchReceiver p1:(id _Nullable)p1 p2:(id _Nullable)p2 suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__24__invoke(dispatchReceiver:p1:p2:suspendHandler:)")));
+ (void)Skie_Suspend__25__bodyDispatchReceiver:(AnsaSharedKtor_client_coreHttpClientCall *)dispatchReceiver info:(AnsaSharedKtor_utilsTypeInfo *)info suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__25__body(dispatchReceiver:info:suspendHandler:)")));
+ (void)Skie_Suspend__26__bodyNullableDispatchReceiver:(AnsaSharedKtor_client_coreHttpClientCall *)dispatchReceiver info:(AnsaSharedKtor_utilsTypeInfo *)info suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__26__bodyNullable(dispatchReceiver:info:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__27__getResponseContentDispatchReceiver:(AnsaSharedKtor_client_coreHttpClientCall *)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__27__getResponseContent(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__28__awaitContentDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__28__awaitContent(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__29__discardDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver max:(int64_t)max suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__29__discard(dispatchReceiver:max:suspendHandler:)")));
+ (void)Skie_Suspend__2__getMerchantDispatchReceiver:(id<AnsaSharedMerchantRepository>)dispatchReceiver merchantId:(NSString *)merchantId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__getMerchant(dispatchReceiver:merchantId:suspendHandler:)")));
+ (void)Skie_Suspend__30__peekToDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver destination:(AnsaSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__30__peekTo(dispatchReceiver:destination:destinationOffset:offset:min:max:suspendHandler:)")));
+ (void)Skie_Suspend__31__readAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(AnsaSharedKtor_ioChunkBuffer *)dst suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__31__readAvailable(dispatchReceiver:dst:suspendHandler:)")));
+ (void)Skie_Suspend__32__readAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(AnsaSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__32__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__33__readAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__33__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__34__readAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int64_t)offset length:(int64_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__34__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__35__readBooleanDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__35__readBoolean(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__36__readByteDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__36__readByte(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__37__readDoubleDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__37__readDouble(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__38__readFloatDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__38__readFloat(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__39__readFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(AnsaSharedKtor_ioChunkBuffer *)dst n:(int32_t)n suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__39__readFully(dispatchReceiver:dst:n:suspendHandler:)")));
+ (void)Skie_Suspend__3__getVirtualCardArtDispatchReceiver:(id<AnsaSharedMerchantRepository>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__getVirtualCardArt(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__40__readFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(AnsaSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__40__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__41__readFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__41__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__42__readFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int64_t)offset length:(int64_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__42__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__43__readIntDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__43__readInt(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__44__readLongDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__44__readLong(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__45__readPacketDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver size:(int32_t)size suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__45__readPacket(dispatchReceiver:size:suspendHandler:)")));
+ (void)Skie_Suspend__46__readRemainingDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver limit:(int64_t)limit suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__46__readRemaining(dispatchReceiver:limit:suspendHandler:)")));
+ (void)Skie_Suspend__47__readShortDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__47__readShort(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__48__readSuspendableSessionDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver consumer:(id<AnsaSharedKotlinSuspendFunction1>)consumer suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__48__readSuspendableSession(dispatchReceiver:consumer:suspendHandler:)")));
+ (void)Skie_Suspend__49__readUTF8LineDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver limit:(int32_t)limit suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__49__readUTF8Line(dispatchReceiver:limit:suspendHandler:)")));
+ (void)Skie_Suspend__4__collectDispatchReceiver:(id<AnsaSharedKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__50__readUTF8LineToDispatchReceiver:(id<AnsaSharedKtor_ioByteReadChannel>)dispatchReceiver out:(id<AnsaSharedKotlinAppendable>)out limit:(int32_t)limit suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__50__readUTF8LineTo(dispatchReceiver:out:limit:suspendHandler:)")));
+ (void)Skie_Suspend__51__invokeDispatchReceiver:(id<AnsaSharedKotlinSuspendFunction1>)dispatchReceiver p1:(id _Nullable)p1 suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__51__invoke(dispatchReceiver:p1:suspendHandler:)")));
+ (void)Skie_Suspend__52__executeDispatchReceiver:(id<AnsaSharedKtor_client_coreHttpClientEngine>)dispatchReceiver data:(AnsaSharedKtor_client_coreHttpRequestData *)data suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__52__execute(dispatchReceiver:data:suspendHandler:)")));
+ (void)Skie_Suspend__53__getValidSessionOrNullDispatchReceiver:(id<AnsaSharedAuthSessionManager>)dispatchReceiver ansaCustomerId:(NSString *)ansaCustomerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__53__getValidSessionOrNull(dispatchReceiver:ansaCustomerId:suspendHandler:)")));
+ (void)Skie_Suspend__54__refreshSessionDispatchReceiver:(id<AnsaSharedAuthSessionManager>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__54__refreshSession(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__55__hasNextDispatchReceiver:(AnsaSharedSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__55__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__56__upgradeDispatchReceiver:(AnsaSharedKtor_httpOutgoingContentProtocolUpgrade *)dispatchReceiver input:(id<AnsaSharedKtor_ioByteReadChannel>)input output:(id<AnsaSharedKtor_ioByteWriteChannel>)output engineContext:(id<AnsaSharedKotlinCoroutineContext>)engineContext userContext:(id<AnsaSharedKotlinCoroutineContext>)userContext suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__56__upgrade(dispatchReceiver:input:output:engineContext:userContext:suspendHandler:)")));
+ (void)Skie_Suspend__57__awaitFreeSpaceDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__57__awaitFreeSpace(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__58__writeAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(AnsaSharedKtor_ioChunkBuffer *)src suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__58__writeAvailable(dispatchReceiver:src:suspendHandler:)")));
+ (void)Skie_Suspend__59__writeAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(AnsaSharedKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__59__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__5__emitDispatchReceiver:(id<AnsaSharedKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__60__writeAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__60__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__61__writeAvailableDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int64_t)offset length:(int64_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__61__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__62__writeByteDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver b:(int8_t)b suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__62__writeByte(dispatchReceiver:b:suspendHandler:)")));
+ (void)Skie_Suspend__63__writeDoubleDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver d:(double)d suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__63__writeDouble(dispatchReceiver:d:suspendHandler:)")));
+ (void)Skie_Suspend__64__writeFloatDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver f:(float)f suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__64__writeFloat(dispatchReceiver:f:suspendHandler:)")));
+ (void)Skie_Suspend__65__writeFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver memory:(AnsaSharedKtor_ioMemory *)memory startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__65__writeFully(dispatchReceiver:memory:startIndex:endIndex:suspendHandler:)")));
+ (void)Skie_Suspend__66__writeFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(AnsaSharedKtor_ioBuffer *)src suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__66__writeFully(dispatchReceiver:src:suspendHandler:)")));
+ (void)Skie_Suspend__67__writeFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(AnsaSharedKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__67__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__68__writeFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__68__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__69__writeFullyDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int64_t)offset length:(int64_t)length suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__69__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__6__addBalanceDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver request:(AnsaSharedAddBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__6__addBalance(dispatchReceiver:request:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__70__writeIntDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver i:(int32_t)i suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__70__writeInt(dispatchReceiver:i:suspendHandler:)")));
+ (void)Skie_Suspend__71__writeLongDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver l:(int64_t)l suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__71__writeLong(dispatchReceiver:l:suspendHandler:)")));
+ (void)Skie_Suspend__72__writePacketDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver packet:(AnsaSharedKtor_ioByteReadPacket *)packet suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__72__writePacket(dispatchReceiver:packet:suspendHandler:)")));
+ (void)Skie_Suspend__73__writeShortDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver s:(int16_t)s suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__73__writeShort(dispatchReceiver:s:suspendHandler:)")));
+ (void)Skie_Suspend__74__writeSuspendSessionDispatchReceiver:(id<AnsaSharedKtor_ioByteWriteChannel>)dispatchReceiver visitor:(id<AnsaSharedKotlinSuspendFunction1>)visitor suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__74__writeSuspendSession(dispatchReceiver:visitor:suspendHandler:)")));
+ (void)Skie_Suspend__75__writeToDispatchReceiver:(AnsaSharedKtor_httpOutgoingContentWriteChannelContent *)dispatchReceiver channel:(id<AnsaSharedKtor_ioByteWriteChannel>)channel suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__75__writeTo(dispatchReceiver:channel:suspendHandler:)")));
+ (void)Skie_Suspend__76__deleteResultExtensionReceiver:(AnsaSharedKtor_client_coreHttpClient *)extensionReceiver resource:(id)resource builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__76__deleteResult(extensionReceiver:resource:builder:suspendHandler:)")));
+ (void)Skie_Suspend__77__getResultExtensionReceiver:(AnsaSharedKtor_client_coreHttpClient *)extensionReceiver resource:(id)resource builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__77__getResult(extensionReceiver:resource:builder:suspendHandler:)")));
+ (void)Skie_Suspend__78__postResultExtensionReceiver:(AnsaSharedKtor_client_coreHttpClient *)extensionReceiver resource:(id)resource body:(id _Nullable)body builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__78__postResult(extensionReceiver:resource:body:builder:suspendHandler:)")));
+ (void)Skie_Suspend__79__postResultExtensionReceiver:(AnsaSharedKtor_client_coreHttpClient *)extensionReceiver url:(NSString *)url body:(id _Nullable)body builder:(void (^)(AnsaSharedKtor_client_coreHttpRequestBuilder *))builder suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__79__postResult(extensionReceiver:url:body:builder:suspendHandler:)")));
+ (void)Skie_Suspend__7__addPaymentMethodDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId paymentMethodType:(id<AnsaSharedAddPaymentMethodTypeKmp>)paymentMethodType idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__7__addPaymentMethod(dispatchReceiver:customerId:paymentMethodType:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__80__safeBodyExtensionReceiver:(AnsaSharedKtor_client_coreHttpResponse *)extensionReceiver suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__80__safeBody(extensionReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__8__deletePaymentMethodDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId paymentMethodId:(NSString *)paymentMethodId idempotencyKey:(NSString * _Nullable)idempotencyKey suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__8__deletePaymentMethod(dispatchReceiver:customerId:paymentMethodId:idempotencyKey:suspendHandler:)")));
+ (void)Skie_Suspend__9__getAutoReloadConfigurationDispatchReceiver:(id<AnsaSharedCustomerRepository>)dispatchReceiver customerId:(NSString *)customerId suspendHandler:(AnsaSharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__9__getAutoReloadConfiguration(dispatchReceiver:customerId:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface AnsaShared__SkieTypeExportsKt : AnsaSharedBase
+ (void)skieTypeExports_0P0:(AnsaSharedKtor_httpOutgoingContentByteArrayContent *)p0 p1:(AnsaSharedKtor_httpOutgoingContentNoContent *)p1 p2:(AnsaSharedKtor_httpOutgoingContentProtocolUpgrade *)p2 p3:(AnsaSharedKtor_httpOutgoingContentReadChannelContent *)p3 p4:(AnsaSharedKtor_httpOutgoingContentWriteChannelContent *)p4 p5:(id<AnsaSharedKotlinx_coroutines_coreSelectClause1>)p5 p6:(id<AnsaSharedKotlinx_coroutines_coreSelectClause2>)p6 p7:(AnsaSharedKotlinx_serialization_corePolymorphicKind *)p7 p8:(AnsaSharedKotlinx_serialization_corePolymorphicKindOPEN *)p8 p9:(AnsaSharedKotlinx_serialization_corePolymorphicKindSEALED *)p9 p10:(AnsaSharedKotlinx_serialization_corePrimitiveKind *)p10 p11:(AnsaSharedKotlinx_serialization_corePrimitiveKindBOOLEAN *)p11 p12:(AnsaSharedKotlinx_serialization_corePrimitiveKindBYTE *)p12 p13:(AnsaSharedKotlinx_serialization_corePrimitiveKindCHAR *)p13 p14:(AnsaSharedKotlinx_serialization_corePrimitiveKindDOUBLE *)p14 p15:(AnsaSharedKotlinx_serialization_corePrimitiveKindFLOAT *)p15 p16:(AnsaSharedKotlinx_serialization_corePrimitiveKindINT *)p16 p17:(AnsaSharedKotlinx_serialization_corePrimitiveKindLONG *)p17 p18:(AnsaSharedKotlinx_serialization_corePrimitiveKindSHORT *)p18 p19:(AnsaSharedKotlinx_serialization_corePrimitiveKindSTRING *)p19 p20:(AnsaSharedKotlinx_serialization_coreSerialKindCONTEXTUAL *)p20 p21:(AnsaSharedKotlinx_serialization_coreSerialKindENUM *)p21 p22:(AnsaSharedKotlinx_serialization_coreStructureKind *)p22 p23:(AnsaSharedKotlinx_serialization_coreStructureKindCLASS *)p23 p24:(AnsaSharedKotlinx_serialization_coreStructureKindLIST *)p24 p25:(AnsaSharedKotlinx_serialization_coreStructureKindMAP *)p25 p26:(AnsaSharedKotlinx_serialization_coreStructureKindOBJECT *)p26 p27:(AnsaSharedKotlinx_serialization_jsonJsonNull *)p27 p28:(AnsaSharedKotlinx_serialization_jsonJsonPrimitive *)p28 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:p21:p22:p23:p24:p25:p26:p27:p28:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface AnsaSharedKotlinCancellationException : AnsaSharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol AnsaSharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network_implRealAuthSessionManager")))
@interface AnsaSharedNetwork_implRealAuthSessionManager : AnsaSharedBase <AnsaSharedAuthSessionManager>
- (instancetype)initWithClientSecretProvider:(id<AnsaSharedClientSecretProviderIos>)clientSecretProvider __attribute__((swift_name("init(clientSecretProvider:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValidSessionOrNullAnsaCustomerId:(NSString *)ansaCustomerId completionHandler:(void (^)(AnsaSharedPaymentSession * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getValidSessionOrNull(ansaCustomerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshSessionWithCompletionHandler:(void (^)(AnsaSharedPaymentSession * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshSession(completionHandler:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol AnsaSharedKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(AnsaSharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AnsaSharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_client_coreClientPlugin")))
@protocol AnsaSharedKtor_client_coreClientPlugin <AnsaSharedKtor_client_coreHttpClientPlugin>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implRealCustomerRepository")))
@interface AnsaSharedCustomer_implRealCustomerRepository : AnsaSharedBase <AnsaSharedCustomerRepository, AnsaSharedKotlinx_coroutines_coreCoroutineScope>
@property (readonly) id<AnsaSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
- (instancetype)initWithKtorWrapper:(AnsaSharedKtorWrapper *)ktorWrapper networkType:(AnsaSharedNetworkType *)networkType customerMapper:(AnsaSharedCustomer_implCustomerMapper *)customerMapper paymentMethodListMapper:(AnsaSharedCustomer_implPaymentMethodListMapper *)paymentMethodListMapper addPaymentMethodMapper:(AnsaSharedCustomer_implAddPaymentMethodMapper *)addPaymentMethodMapper autoReloadConfigMapper:(AnsaSharedCustomer_implAutoReloadConfigMapper *)autoReloadConfigMapper addBalanceMapper:(AnsaSharedCustomer_implAddBalanceMapper *)addBalanceMapper useBalanceMapper:(AnsaSharedCustomer_implUseBalanceMapper *)useBalanceMapper userReloadConfigurationMapper:(AnsaSharedCustomer_implUserReloadConfigurationMapper *)userReloadConfigurationMapper transactionsMapper:(AnsaSharedCustomer_implTransactionMapper *)transactionsMapper __attribute__((swift_name("init(ktorWrapper:networkType:customerMapper:paymentMethodListMapper:addPaymentMethodMapper:autoReloadConfigMapper:addBalanceMapper:useBalanceMapper:userReloadConfigurationMapper:transactionsMapper:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addBalanceRequest:(AnsaSharedAddBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedBalanceUpdate *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addBalance(request:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPaymentMethodCustomerId:(NSString *)customerId paymentMethodType:(id<AnsaSharedAddPaymentMethodTypeKmp>)paymentMethodType idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedPaymentMethod *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPaymentMethod(customerId:paymentMethodType:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePaymentMethodCustomerId:(NSString *)customerId paymentMethodId:(NSString *)paymentMethodId idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deletePaymentMethod(customerId:paymentMethodId:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAutoReloadConfigurationCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedAutoReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAutoReloadConfiguration(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCustomerCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedCustomer *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCustomer(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentMethodsCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedPaymentMethodCollection *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentMethods(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReloadConfigCustomerId:(NSString *)customerId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedUserReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReloadConfig(customerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionsCustomerId:(NSString *)customerId cursor:(NSString * _Nullable)cursor completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedTransactionResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactions(customerId:cursor:completionHandler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreFlow>)observeCustomerCustomerId:(NSString *)customerId __attribute__((swift_name("observeCustomer(customerId:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAutoReloadConfigurationRequest:(AnsaSharedAutoReloadConfigurationRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedAutoReloadConfiguration *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAutoReloadConfiguration(request:idempotencyKey:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)useBalanceRequest:(AnsaSharedUseBalanceRequest *)request idempotencyKey:(NSString * _Nullable)idempotencyKey completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedBalanceUpdate *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("useBalance(request:idempotencyKey:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implRealMerchantRepository")))
@interface AnsaSharedMerchant_implRealMerchantRepository : AnsaSharedBase <AnsaSharedMerchantRepository, AnsaSharedKotlinx_coroutines_coreCoroutineScope>
@property (readonly) id<AnsaSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
- (instancetype)initWithKtorWrapper:(AnsaSharedKtorWrapper *)ktorWrapper merchantMapper:(AnsaSharedMerchant_implMerchantMapper *)merchantMapper __attribute__((swift_name("init(ktorWrapper:merchantMapper:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBasisTheoryApiKeyMerchantId:(NSString *)merchantId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchantBasisTheoryInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBasisTheoryApiKey(merchantId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMerchantMerchantId:(NSString *)merchantId completionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchant *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMerchant(merchantId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVirtualCardArtWithCompletionHandler:(void (^)(AnsaSharedApiResult<AnsaSharedMerchantCartArtInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVirtualCardArt(completionHandler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreFlow>)observeMerchantMerchantId:(NSString *)merchantId __attribute__((swift_name("observeMerchant(merchantId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_inject_runtimeLazyMap")))
@interface AnsaSharedKotlin_inject_runtimeLazyMap : AnsaSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getKey:(NSString *)key init:(id _Nullable (^)(void))init __attribute__((swift_name("get(key:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AnsaSharedKotlinUnit : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AnsaSharedKotlinEnumCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AnsaSharedKotlinArray<T> : AnsaSharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AnsaSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AnsaSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface AnsaSharedKotlinx_serialization_jsonJsonElement : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AnsaSharedKotlinNothing : AnsaSharedBase
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AnsaSharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AnsaSharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AnsaSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AnsaSharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AnsaSharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AnsaSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AnsaSharedKotlinx_serialization_coreKSerializer <AnsaSharedKotlinx_serialization_coreSerializationStrategy, AnsaSharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol AnsaSharedKtor_httpHttpMessageBuilder
@required
@property (readonly) AnsaSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface AnsaSharedKtor_client_coreHttpRequestBuilder : AnsaSharedBase <AnsaSharedKtor_httpHttpMessageBuilder>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property AnsaSharedKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) AnsaSharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property AnsaSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnsaSharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<AnsaSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<AnsaSharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<AnsaSharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (AnsaSharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(AnsaSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (AnsaSharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(AnsaSharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(AnsaSharedKtor_httpURLBuilder *, AnsaSharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AnsaSharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AnsaSharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AnsaSharedKotlinCoroutineContextElement> _Nullable)getKey:(id<AnsaSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AnsaSharedKotlinCoroutineContext>)minusKeyKey:(id<AnsaSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AnsaSharedKotlinCoroutineContext>)plusContext:(id<AnsaSharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol AnsaSharedKtor_client_coreHttpClientEngine <AnsaSharedKotlinx_coroutines_coreCoroutineScope, AnsaSharedKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(AnsaSharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(AnsaSharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(AnsaSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) AnsaSharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<AnsaSharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface AnsaSharedKtor_client_coreHttpClientEngineConfig : AnsaSharedBase
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property AnsaSharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface AnsaSharedKtor_client_coreHttpClientConfig<T> : AnsaSharedBase
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(AnsaSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<AnsaSharedKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(AnsaSharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(AnsaSharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol AnsaSharedKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AnsaSharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AnsaSharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface AnsaSharedKtor_eventsEvents : AnsaSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(AnsaSharedKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<AnsaSharedKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(AnsaSharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(AnsaSharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AnsaSharedKtor_utilsPipeline<TSubject, TContext> : AnsaSharedBase
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AnsaSharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
- (instancetype)initWithPhases:(AnsaSharedKotlinArray<AnsaSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AnsaSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(AnsaSharedKtor_utilsPipelinePhase *)reference phase:(AnsaSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AnsaSharedKtor_utilsPipelinePhase *)reference phase:(AnsaSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase block:(id<AnsaSharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(AnsaSharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(AnsaSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(AnsaSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(AnsaSharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface AnsaSharedKtor_client_coreHttpReceivePipeline : AnsaSharedKtor_utilsPipeline<AnsaSharedKtor_client_coreHttpResponse *, AnsaSharedKotlinUnit *>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnsaSharedKotlinArray<AnsaSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface AnsaSharedKtor_client_coreHttpRequestPipeline : AnsaSharedKtor_utilsPipeline<id, AnsaSharedKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnsaSharedKotlinArray<AnsaSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface AnsaSharedKtor_client_coreHttpResponsePipeline : AnsaSharedKtor_utilsPipeline<AnsaSharedKtor_client_coreHttpResponseContainer *, AnsaSharedKtor_client_coreHttpClientCall *>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnsaSharedKotlinArray<AnsaSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface AnsaSharedKtor_client_coreHttpSendPipeline : AnsaSharedKtor_utilsPipeline<id, AnsaSharedKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnsaSharedKotlinArray<AnsaSharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnsaSharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnsaSharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AnsaSharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnsaSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol AnsaSharedKtor_httpHeaders <AnsaSharedKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface AnsaSharedKtor_client_coreHttpClientCall : AnsaSharedBase <AnsaSharedKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) AnsaSharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnsaSharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<AnsaSharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<AnsaSharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property AnsaSharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
- (instancetype)initWithClient:(AnsaSharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(AnsaSharedKtor_client_coreHttpClient *)client requestData:(AnsaSharedKtor_client_coreHttpRequestData *)requestData responseData:(AnsaSharedKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(AnsaSharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(AnsaSharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<AnsaSharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol AnsaSharedKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(AnsaSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(AnsaSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(AnsaSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnsaSharedKtor_ioChunkBuffer *)dst completionHandler:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(AnsaSharedKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnsaSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(AnsaSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(AnsaSharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(AnsaSharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(AnsaSharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnsaSharedKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnsaSharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(AnsaSharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(AnsaSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(AnsaSharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<AnsaSharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(AnsaSharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<AnsaSharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<AnsaSharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(AnsaSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) AnsaSharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface AnsaSharedKtor_utilsGMTDate : AnsaSharedBase <AnsaSharedKotlinComparable>
@property (class, readonly, getter=companion) AnsaSharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) AnsaSharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) AnsaSharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (int32_t)compareToOther:(AnsaSharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (AnsaSharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(AnsaSharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(AnsaSharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface AnsaSharedKtor_httpHttpStatusCode : AnsaSharedBase <AnsaSharedKotlinComparable>
@property (class, readonly, getter=companion) AnsaSharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(AnsaSharedKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (AnsaSharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (AnsaSharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface AnsaSharedKtor_httpHttpProtocolVersion : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AnsaSharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AnsaSharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AnsaSharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AnsaSharedKotlinKClass <AnsaSharedKotlinKDeclarationContainer, AnsaSharedKotlinKAnnotatedElement, AnsaSharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AnsaSharedKotlinCoroutineContextElement <AnsaSharedKotlinCoroutineContext>
@required
@property (readonly) id<AnsaSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol AnsaSharedKotlinx_coroutines_coreJob <AnsaSharedKotlinCoroutineContextElement>
@required
- (id<AnsaSharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<AnsaSharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(AnsaSharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (AnsaSharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<AnsaSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(AnsaSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(AnsaSharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<AnsaSharedKotlinx_coroutines_coreJob>)plusOther:(id<AnsaSharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<AnsaSharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol AnsaSharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AnsaSharedKotlinSuspendFunction2 <AnsaSharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface AnsaSharedKtor_utilsTypeInfo : AnsaSharedBase
@property (readonly) id<AnsaSharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<AnsaSharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<AnsaSharedKotlinKClass> type __attribute__((swift_name("type")));
- (instancetype)initWithType:(id<AnsaSharedKotlinKClass>)type reifiedType:(id<AnsaSharedKotlinKType>)reifiedType kotlinType:(id<AnsaSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_utilsTypeInfo *)doCopyType:(id<AnsaSharedKotlinKClass>)type reifiedType:(id<AnsaSharedKotlinKType>)reifiedType kotlinType:(id<AnsaSharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface AnsaSharedKtor_ioMemory : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(AnsaSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(AnsaSharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (AnsaSharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (AnsaSharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface AnsaSharedKtor_ioBuffer : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) AnsaSharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
- (instancetype)initWithMemory:(AnsaSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (AnsaSharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(AnsaSharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface AnsaSharedKtor_ioChunkBuffer : AnsaSharedKtor_ioBuffer
@property (class, readonly, getter=companion) AnsaSharedKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
@property AnsaSharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) AnsaSharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
- (instancetype)initWithMemory:(AnsaSharedKtor_ioMemory *)memory origin:(AnsaSharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AnsaSharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(AnsaSharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (AnsaSharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (AnsaSharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<AnsaSharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AnsaSharedKotlinByteArray : AnsaSharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AnsaSharedByte *(^)(AnsaSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AnsaSharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol AnsaSharedKotlinSuspendFunction1 <AnsaSharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol AnsaSharedKotlinAppendable
@required
- (id<AnsaSharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<AnsaSharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<AnsaSharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface AnsaSharedKtor_client_coreHttpRequestData : AnsaSharedBase
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnsaSharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<AnsaSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnsaSharedKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(AnsaSharedKtor_httpUrl *)url method:(AnsaSharedKtor_httpHttpMethod *)method headers:(id<AnsaSharedKtor_httpHeaders>)headers body:(AnsaSharedKtor_httpOutgoingContent *)body executionContext:(id<AnsaSharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<AnsaSharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<AnsaSharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface AnsaSharedKtor_httpOutgoingContent : AnsaSharedBase
@property (readonly) AnsaSharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) AnsaSharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<AnsaSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
- (id _Nullable)getPropertyKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(AnsaSharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<AnsaSharedKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ProtocolUpgrade")))
@interface AnsaSharedKtor_httpOutgoingContentProtocolUpgrade : AnsaSharedKtor_httpOutgoingContent
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upgradeInput:(id<AnsaSharedKtor_ioByteReadChannel>)input output:(id<AnsaSharedKtor_ioByteWriteChannel>)output engineContext:(id<AnsaSharedKotlinCoroutineContext>)engineContext userContext:(id<AnsaSharedKotlinCoroutineContext>)userContext completionHandler:(void (^)(id<AnsaSharedKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upgrade(input:output:engineContext:userContext:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_ioByteWriteChannel")))
@protocol AnsaSharedKtor_ioByteWriteChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitFreeSpaceWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitFreeSpace(completionHandler:)")));
- (BOOL)closeCause:(AnsaSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)flush __attribute__((swift_name("flush()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(AnsaSharedKtor_ioChunkBuffer *)src completionHandler:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:completionHandler:)")));
- (int32_t)writeAvailableMin:(int32_t)min block:(void (^)(AnsaSharedKtor_ioBuffer *))block __attribute__((swift_name("writeAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(AnsaSharedKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(void *)src offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(void *)src offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AnsaSharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeByteB:(int8_t)b completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeByte(b:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeDoubleD:(double)d completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeDouble(d:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFloatF:(float)f completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFloat(f:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(AnsaSharedKtor_ioBuffer *)src completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullyMemory:(AnsaSharedKtor_ioMemory *)memory startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(memory:startIndex:endIndex:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(AnsaSharedKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeIntI:(int32_t)i completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeInt(i:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeLongL:(int64_t)l completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeLong(l:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writePacketPacket:(AnsaSharedKtor_ioByteReadPacket *)packet completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writePacket(packet:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeShortS:(int16_t)s completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeShort(s:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeSuspendSessionVisitor:(id<AnsaSharedKotlinSuspendFunction1>)visitor completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeSuspendSession(visitor:completionHandler:)"))) __attribute__((deprecated("Use write { } instead.")));
@property (readonly) BOOL autoFlush __attribute__((swift_name("autoFlush")));
@property (readonly) int32_t availableForWrite __attribute__((swift_name("availableForWrite")));
@property (readonly) AnsaSharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesWritten __attribute__((swift_name("totalBytesWritten")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface AnsaSharedKtor_ioInput : AnsaSharedBase <AnsaSharedKtor_ioCloseable>
@property (class, readonly, getter=companion) AnsaSharedKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<AnsaSharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
- (instancetype)initWithHead:(AnsaSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnsaSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AnsaSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AnsaSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(AnsaSharedKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(AnsaSharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<AnsaSharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<AnsaSharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface AnsaSharedKtor_ioByteReadPacket : AnsaSharedKtor_ioInput
@property (class, readonly, getter=companion) AnsaSharedKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithHead:(AnsaSharedKtor_ioChunkBuffer *)head pool:(id<AnsaSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(AnsaSharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnsaSharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (AnsaSharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AnsaSharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AnsaSharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.WriteChannelContent")))
@interface AnsaSharedKtor_httpOutgoingContentWriteChannelContent : AnsaSharedKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeToChannel:(id<AnsaSharedKtor_ioByteWriteChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeTo(channel:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ByteArrayContent")))
@interface AnsaSharedKtor_httpOutgoingContentByteArrayContent : AnsaSharedKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedKotlinByteArray *)bytes __attribute__((swift_name("bytes()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.NoContent")))
@interface AnsaSharedKtor_httpOutgoingContentNoContent : AnsaSharedKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ReadChannelContent")))
@interface AnsaSharedKtor_httpOutgoingContentReadChannelContent : AnsaSharedKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AnsaSharedKtor_ioByteReadChannel>)readFrom __attribute__((swift_name("readFrom()")));
- (id<AnsaSharedKtor_ioByteReadChannel>)readFromRange:(AnsaSharedKotlinLongRange *)range __attribute__((swift_name("readFrom(range:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol AnsaSharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) AnsaSharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<AnsaSharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(AnsaSharedKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<AnsaSharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol AnsaSharedKotlinx_coroutines_coreSelectClause1 <AnsaSharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol AnsaSharedKotlinx_coroutines_coreSelectClause2 <AnsaSharedKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AnsaSharedKotlinx_serialization_coreSerialKind : AnsaSharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface AnsaSharedKotlinx_serialization_corePolymorphicKind : AnsaSharedKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface AnsaSharedKotlinx_serialization_corePolymorphicKindOPEN : AnsaSharedKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface AnsaSharedKotlinx_serialization_corePolymorphicKindSEALED : AnsaSharedKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKind : AnsaSharedKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindBOOLEAN : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindBYTE : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindCHAR : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindDOUBLE : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindFLOAT : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindINT : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindLONG : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindSHORT : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface AnsaSharedKotlinx_serialization_corePrimitiveKindSTRING : AnsaSharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface AnsaSharedKotlinx_serialization_coreSerialKindCONTEXTUAL : AnsaSharedKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface AnsaSharedKotlinx_serialization_coreSerialKindENUM : AnsaSharedKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface AnsaSharedKotlinx_serialization_coreStructureKind : AnsaSharedKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface AnsaSharedKotlinx_serialization_coreStructureKindCLASS : AnsaSharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface AnsaSharedKotlinx_serialization_coreStructureKindLIST : AnsaSharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface AnsaSharedKotlinx_serialization_coreStructureKindMAP : AnsaSharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface AnsaSharedKotlinx_serialization_coreStructureKindOBJECT : AnsaSharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface AnsaSharedKotlinx_serialization_jsonJsonPrimitive : AnsaSharedKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) AnsaSharedKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNull")))
@interface AnsaSharedKotlinx_serialization_jsonJsonNull : AnsaSharedKotlinx_serialization_jsonJsonPrimitive
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_jsonJsonNull *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AnsaSharedKotlinArray<id<AnsaSharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AnsaSharedKtor_utilsAttributeKey<T> : AnsaSharedBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Core_implMapper")))
@protocol AnsaSharedCore_implMapper
@required
- (id _Nullable)mapFrom:(id _Nullable)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerMapper")))
@interface AnsaSharedCustomer_implCustomerMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithBalanceMapper:(AnsaSharedCustomer_implBalanceMapper *)balanceMapper billingDetailsMapper:(AnsaSharedCustomer_implBillingDetailsMapper *)billingDetailsMapper paymentMethodListMapper:(AnsaSharedCustomer_implPaymentMethodListMapper *)paymentMethodListMapper autoReloadConfigMapper:(AnsaSharedCustomer_implAutoReloadConfigMapper *)autoReloadConfigMapper __attribute__((swift_name("init(balanceMapper:billingDetailsMapper:paymentMethodListMapper:autoReloadConfigMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer *)mapFrom:(AnsaSharedCustomer_implCustomerResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodListMapper")))
@interface AnsaSharedCustomer_implPaymentMethodListMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithMethodMapper:(AnsaSharedCustomer_implPaymentMethodMapper *)methodMapper __attribute__((swift_name("init(methodMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentMethodCollection *)mapFrom:(AnsaSharedCustomer_implPaymentMethodsResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddPaymentMethodMapper")))
@interface AnsaSharedCustomer_implAddPaymentMethodMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithCardMapper:(AnsaSharedCustomer_implCardMapper *)cardMapper __attribute__((swift_name("init(cardMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentMethod *)mapFrom:(AnsaSharedCustomer_implAddPaymentMethodResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAutoReloadConfigMapper")))
@interface AnsaSharedCustomer_implAutoReloadConfigMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedAutoReloadConfiguration *)mapFrom:(AnsaSharedCustomer_implAutoReloadConfigurationResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddBalanceMapper")))
@interface AnsaSharedCustomer_implAddBalanceMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithBalanceMapper:(AnsaSharedCustomer_implBalanceMapper_ *)balanceMapper __attribute__((swift_name("init(balanceMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedBalanceUpdate *)mapFrom:(AnsaSharedCustomer_implAddBalanceResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUseBalanceMapper")))
@interface AnsaSharedCustomer_implUseBalanceMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithBalanceMapper:(AnsaSharedCustomer_implBalanceMapper_ *)balanceMapper __attribute__((swift_name("init(balanceMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedBalanceUpdate *)mapFrom:(AnsaSharedCustomer_implUseBalanceResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUserReloadConfigurationMapper")))
@interface AnsaSharedCustomer_implUserReloadConfigurationMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedUserReloadConfiguration *)mapFrom:(AnsaSharedCustomer_implUserReloadConfigurationResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implTransactionMapper")))
@interface AnsaSharedCustomer_implTransactionMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedTransaction *)mapFrom:(AnsaSharedCustomer_implTransactionResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implMerchantMapper")))
@interface AnsaSharedMerchant_implMerchantMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedMerchant *)mapFrom:(AnsaSharedMerchant_implMerchantResponse *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AnsaSharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface AnsaSharedKotlinx_serialization_jsonJsonElementCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AnsaSharedKotlinx_serialization_coreEncoder
@required
- (id<AnsaSharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AnsaSharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AnsaSharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AnsaSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AnsaSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AnsaSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AnsaSharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AnsaSharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AnsaSharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AnsaSharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AnsaSharedKotlinx_serialization_coreDecoder
@required
- (id<AnsaSharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AnsaSharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AnsaSharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AnsaSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol AnsaSharedKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AnsaSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AnsaSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AnsaSharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnsaSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface AnsaSharedKtor_utilsStringValuesBuilderImpl : AnsaSharedBase <AnsaSharedKtor_utilsStringValuesBuilder>
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) AnsaSharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AnsaSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AnsaSharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AnsaSharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnsaSharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface AnsaSharedKtor_httpHeadersBuilder : AnsaSharedKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AnsaSharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface AnsaSharedKtor_client_coreHttpRequestBuilderCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface AnsaSharedKtor_httpURLBuilder : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<AnsaSharedKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AnsaSharedKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property AnsaSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithProtocol:(AnsaSharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<AnsaSharedKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface AnsaSharedKtor_httpHttpMethod : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AnsaSharedKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface AnsaSharedKtor_client_coreHttpResponseData : AnsaSharedBase
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<AnsaSharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<AnsaSharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnsaSharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnsaSharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)initWithStatusCode:(AnsaSharedKtor_httpHttpStatusCode *)statusCode requestTime:(AnsaSharedKtor_utilsGMTDate *)requestTime headers:(id<AnsaSharedKtor_httpHeaders>)headers version:(AnsaSharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<AnsaSharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface AnsaSharedKotlinAbstractCoroutineContextElement : AnsaSharedBase <AnsaSharedKotlinCoroutineContextElement>
@property (readonly) id<AnsaSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(id<AnsaSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol AnsaSharedKotlinContinuationInterceptor <AnsaSharedKotlinCoroutineContextElement>
@required
- (id<AnsaSharedKotlinContinuation>)interceptContinuationContinuation:(id<AnsaSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<AnsaSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher : AnsaSharedKotlinAbstractCoroutineContextElement <AnsaSharedKotlinContinuationInterceptor>
@property (class, readonly, getter=companion) AnsaSharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<AnsaSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<AnsaSharedKotlinCoroutineContext>)context block:(id<AnsaSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<AnsaSharedKotlinCoroutineContext>)context block:(id<AnsaSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<AnsaSharedKotlinContinuation>)interceptContinuationContinuation:(id<AnsaSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<AnsaSharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<AnsaSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface AnsaSharedKtor_client_coreProxyConfig : AnsaSharedBase
@property (readonly) AnsaSharedKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(AnsaSharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface AnsaSharedKtor_eventsEventDefinition<T> : AnsaSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AnsaSharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AnsaSharedKtor_utilsPipelinePhase : AnsaSharedBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface AnsaSharedKtor_client_coreHttpReceivePipelinePhases : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface AnsaSharedKtor_client_coreHttpRequestPipelinePhases : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface AnsaSharedKtor_client_coreHttpResponsePipelinePhases : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface AnsaSharedKtor_client_coreHttpResponseContainer : AnsaSharedBase
@property (readonly) AnsaSharedKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
- (instancetype)initWithExpectedType:(AnsaSharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(AnsaSharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface AnsaSharedKtor_client_coreHttpSendPipelinePhases : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnsaSharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol AnsaSharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface AnsaSharedKtor_client_coreHttpClientCallCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol AnsaSharedKtor_client_coreHttpRequest <AnsaSharedKtor_httpHttpMessage, AnsaSharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<AnsaSharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnsaSharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) AnsaSharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnsaSharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol AnsaSharedKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (AnsaSharedKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface AnsaSharedKtor_utilsGMTDateCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface AnsaSharedKtor_utilsWeekDay : AnsaSharedKotlinEnum<AnsaSharedKtor_utilsWeekDay *>
@property (class, readonly, getter=companion) AnsaSharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) AnsaSharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface AnsaSharedKtor_utilsMonth : AnsaSharedKotlinEnum<AnsaSharedKtor_utilsMonth *>
@property (class, readonly, getter=companion) AnsaSharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) AnsaSharedKtor_utilsMonth *december __attribute__((swift_name("december")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface AnsaSharedKtor_httpHttpStatusCodeCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) AnsaSharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<AnsaSharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface AnsaSharedKtor_httpHttpProtocolVersionCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) AnsaSharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (AnsaSharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol AnsaSharedKotlinx_coroutines_coreChildHandle <AnsaSharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(AnsaSharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<AnsaSharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol AnsaSharedKotlinx_coroutines_coreChildJob <AnsaSharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<AnsaSharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol AnsaSharedKotlinSequence
@required
- (id<AnsaSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol AnsaSharedKotlinx_coroutines_coreSelectClause0 <AnsaSharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol AnsaSharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<AnsaSharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<AnsaSharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface AnsaSharedKtor_ioMemoryCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface AnsaSharedKtor_ioBufferCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol AnsaSharedKtor_ioObjectPool <AnsaSharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface AnsaSharedKtor_ioChunkBufferCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AnsaSharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AnsaSharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface AnsaSharedKotlinByteIterator : AnsaSharedBase <AnsaSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedByte *)next_ __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AnsaSharedKtor_httpUrl : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AnsaSharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface AnsaSharedKtor_httpHeaderValueWithParameters : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<AnsaSharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnsaSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface AnsaSharedKtor_httpContentType : AnsaSharedKtor_httpHeaderValueWithParameters
@property (class, readonly, getter=companion) AnsaSharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<AnsaSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnsaSharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(AnsaSharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (AnsaSharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (AnsaSharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface AnsaSharedKtor_ioInputCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface AnsaSharedKtor_ioByteReadPacketCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol AnsaSharedKotlinIterable
@required
- (id<AnsaSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinLongProgression")))
@interface AnsaSharedKotlinLongProgression : AnsaSharedBase <AnsaSharedKotlinIterable>
@property (class, readonly, getter=companion) AnsaSharedKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (AnsaSharedKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol AnsaSharedKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol AnsaSharedKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface AnsaSharedKotlinLongRange : AnsaSharedKotlinLongProgression <AnsaSharedKotlinClosedRange, AnsaSharedKotlinOpenEndRange>
@property (class, readonly, getter=companion) AnsaSharedKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedLong *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Long type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) AnsaSharedLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) AnsaSharedLong *start __attribute__((swift_name("start")));
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(AnsaSharedLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(AnsaSharedLong *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol AnsaSharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<AnsaSharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<AnsaSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface AnsaSharedKotlinx_serialization_jsonJsonPrimitiveCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implBalanceMapper")))
@interface AnsaSharedCustomer_implBalanceMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedBalance *)mapFrom:(AnsaSharedCustomer_implCustomerResponseCurrentBalance *)from __attribute__((swift_name("map(from:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implBillingDetailsMapper")))
@interface AnsaSharedCustomer_implBillingDetailsMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedBillingDetails *)mapFrom:(AnsaSharedCustomer_implCustomerResponseBillingDetails *)from __attribute__((swift_name("map(from:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse")))
@interface AnsaSharedCustomer_implCustomerResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCustomerResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedCustomer_implCustomerResponseAnsaMetadata *ansaMetadata __attribute__((swift_name("ansaMetadata")));
@property (readonly) AnsaSharedCustomer_implAutoReloadConfigurationResponse * _Nullable autoReloadConfig __attribute__((swift_name("autoReloadConfig")));
@property (readonly) AnsaSharedCustomer_implCustomerResponseCurrentBalance *balance __attribute__((swift_name("balance")));
@property (readonly) AnsaSharedCustomer_implCustomerResponseBillingDetails *billingDetails __attribute__((swift_name("billingDetails")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *merchantID __attribute__((swift_name("merchantID")));
@property (readonly) AnsaSharedCustomer_implPaymentMethodsResponse * _Nullable paymentMethods __attribute__((swift_name("paymentMethods")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
- (instancetype)initWithId:(NSString *)id ansaMetadata:(AnsaSharedCustomer_implCustomerResponseAnsaMetadata *)ansaMetadata balance:(AnsaSharedCustomer_implCustomerResponseCurrentBalance *)balance billingDetails:(AnsaSharedCustomer_implCustomerResponseBillingDetails *)billingDetails email:(NSString * _Nullable)email merchantID:(NSString *)merchantID phone:(NSString * _Nullable)phone status:(NSString *)status autoReloadConfig:(AnsaSharedCustomer_implAutoReloadConfigurationResponse * _Nullable)autoReloadConfig paymentMethods:(AnsaSharedCustomer_implPaymentMethodsResponse * _Nullable)paymentMethods __attribute__((swift_name("init(id:ansaMetadata:balance:billingDetails:email:merchantID:phone:status:autoReloadConfig:paymentMethods:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCustomerResponse *)doCopyId:(NSString *)id ansaMetadata:(AnsaSharedCustomer_implCustomerResponseAnsaMetadata *)ansaMetadata balance:(AnsaSharedCustomer_implCustomerResponseCurrentBalance *)balance billingDetails:(AnsaSharedCustomer_implCustomerResponseBillingDetails *)billingDetails email:(NSString * _Nullable)email merchantID:(NSString *)merchantID phone:(NSString * _Nullable)phone status:(NSString *)status autoReloadConfig:(AnsaSharedCustomer_implAutoReloadConfigurationResponse * _Nullable)autoReloadConfig paymentMethods:(AnsaSharedCustomer_implPaymentMethodsResponse * _Nullable)paymentMethods __attribute__((swift_name("doCopy(id:ansaMetadata:balance:billingDetails:email:merchantID:phone:status:autoReloadConfig:paymentMethods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodMapper")))
@interface AnsaSharedCustomer_implPaymentMethodMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)initWithCardMapper:(AnsaSharedCustomer_implCardMapper *)cardMapper __attribute__((swift_name("init(cardMapper:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedPaymentMethod *)mapFrom:(AnsaSharedCustomer_implPaymentMethodResponse *)from __attribute__((swift_name("map(from:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodsResponse")))
@interface AnsaSharedCustomer_implPaymentMethodsResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implPaymentMethodsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSArray<AnsaSharedCustomer_implPaymentMethodResponse *> *paymentMethods __attribute__((swift_name("paymentMethods")));
- (instancetype)initWithCount:(int32_t)count paymentMethods:(NSArray<AnsaSharedCustomer_implPaymentMethodResponse *> *)paymentMethods __attribute__((swift_name("init(count:paymentMethods:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implPaymentMethodsResponse *)doCopyCount:(int32_t)count paymentMethods:(NSArray<AnsaSharedCustomer_implPaymentMethodResponse *> *)paymentMethods __attribute__((swift_name("doCopy(count:paymentMethods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCardMapper")))
@interface AnsaSharedCustomer_implCardMapper : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedCard *)mapFrom:(AnsaSharedCustomer_implCardResponse *)from __attribute__((swift_name("map(from:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddPaymentMethodResponse")))
@interface AnsaSharedCustomer_implAddPaymentMethodResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implAddPaymentMethodResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedCustomer_implCardResponse *card __attribute__((swift_name("card")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithCard:(AnsaSharedCustomer_implCardResponse *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(card:id:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implAddPaymentMethodResponse *)doCopyCard:(AnsaSharedCustomer_implCardResponse *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(card:id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAutoReloadConfigurationResponse")))
@interface AnsaSharedCustomer_implAutoReloadConfigurationResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implAutoReloadConfigurationResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString * _Nullable paymentMethodId __attribute__((swift_name("paymentMethodId")));
@property (readonly) AnsaSharedInt * _Nullable reloadAmount __attribute__((swift_name("reloadAmount")));
@property (readonly) AnsaSharedInt * _Nullable reloadThreshold __attribute__((swift_name("reloadThreshold")));
- (instancetype)initWithEnabled:(BOOL)enabled paymentMethodId:(NSString * _Nullable)paymentMethodId reloadAmount:(AnsaSharedInt * _Nullable)reloadAmount reloadThreshold:(AnsaSharedInt * _Nullable)reloadThreshold __attribute__((swift_name("init(enabled:paymentMethodId:reloadAmount:reloadThreshold:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implAutoReloadConfigurationResponse *)doCopyEnabled:(BOOL)enabled paymentMethodId:(NSString * _Nullable)paymentMethodId reloadAmount:(AnsaSharedInt * _Nullable)reloadAmount reloadThreshold:(AnsaSharedInt * _Nullable)reloadThreshold __attribute__((swift_name("doCopy(enabled:paymentMethodId:reloadAmount:reloadThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implBalanceMapper_")))
@interface AnsaSharedCustomer_implBalanceMapper_ : AnsaSharedBase <AnsaSharedCore_implMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedBalance *)mapFrom:(AnsaSharedCustomer_implCurrentBalance *)from __attribute__((swift_name("map(from:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddBalanceResponse")))
@interface AnsaSharedCustomer_implAddBalanceResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implAddBalanceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedCustomer_implCurrentBalance *currentBalance __attribute__((swift_name("currentBalance")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
- (instancetype)initWithCurrentBalance:(AnsaSharedCustomer_implCurrentBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("init(currentBalance:label:timestamp:transactionId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implAddBalanceResponse *)doCopyCurrentBalance:(AnsaSharedCustomer_implCurrentBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(currentBalance:label:timestamp:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUseBalanceResponse")))
@interface AnsaSharedCustomer_implUseBalanceResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implUseBalanceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedCustomer_implCurrentBalance *currentBalance __attribute__((swift_name("currentBalance")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
- (instancetype)initWithCurrentBalance:(AnsaSharedCustomer_implCurrentBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("init(currentBalance:label:timestamp:transactionId:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implUseBalanceResponse *)doCopyCurrentBalance:(AnsaSharedCustomer_implCurrentBalance *)currentBalance label:(NSString * _Nullable)label timestamp:(NSString *)timestamp transactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(currentBalance:label:timestamp:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUserReloadConfigurationResponse")))
@interface AnsaSharedCustomer_implUserReloadConfigurationResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implUserReloadConfigurationResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowCustomAmount __attribute__((swift_name("allowCustomAmount")));
@property (readonly) NSArray<AnsaSharedCustomer_implPresetReloadAmountResponse *> *presetAmounts __attribute__((swift_name("presetAmounts")));
- (instancetype)initWithAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedCustomer_implPresetReloadAmountResponse *> *)presetAmounts __attribute__((swift_name("init(allowCustomAmount:presetAmounts:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implUserReloadConfigurationResponse *)doCopyAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedCustomer_implPresetReloadAmountResponse *> *)presetAmounts __attribute__((swift_name("doCopy(allowCustomAmount:presetAmounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implTransactionResponse")))
@interface AnsaSharedCustomer_implTransactionResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implTransactionResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *createdAtIso __attribute__((swift_name("createdAtIso")));
@property (readonly) NSString *from __attribute__((swift_name("from")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable metadataJson __attribute__((swift_name("metadataJson")));
@property (readonly) NSString * _Nullable paymentMethodId __attribute__((swift_name("paymentMethodId")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@property (readonly) NSString *to __attribute__((swift_name("to")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithId:(NSString *)id type:(NSString *)type amount:(int32_t)amount createdAtIso:(NSString *)createdAtIso source:(NSString * _Nullable)source paymentMethodId:(NSString * _Nullable)paymentMethodId reason:(NSString * _Nullable)reason from:(NSString *)from to:(NSString *)to metadataJson:(NSString * _Nullable)metadataJson label:(NSString * _Nullable)label __attribute__((swift_name("init(id:type:amount:createdAtIso:source:paymentMethodId:reason:from:to:metadataJson:label:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implTransactionResponse *)doCopyId:(NSString *)id type:(NSString *)type amount:(int32_t)amount createdAtIso:(NSString *)createdAtIso source:(NSString * _Nullable)source paymentMethodId:(NSString * _Nullable)paymentMethodId reason:(NSString * _Nullable)reason from:(NSString *)from to:(NSString *)to metadataJson:(NSString * _Nullable)metadataJson label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(id:type:amount:createdAtIso:source:paymentMethodId:reason:from:to:metadataJson:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implMerchantResponse")))
@interface AnsaSharedMerchant_implMerchantResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implMerchantResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));
@property AnsaSharedMerchant_implMetadataResponse *metadata __attribute__((swift_name("metadata")));
@property NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name metadata:(AnsaSharedMerchant_implMetadataResponse *)metadata __attribute__((swift_name("init(id:name:metadata:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implMerchantResponse *)doCopyId:(NSString *)id name:(NSString *)name metadata:(AnsaSharedMerchant_implMetadataResponse *)metadata __attribute__((swift_name("doCopy(id:name:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AnsaSharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AnsaSharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnsaSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnsaSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AnsaSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AnsaSharedKotlinx_serialization_coreSerializersModule : AnsaSharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AnsaSharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnsaSharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AnsaSharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AnsaSharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnsaSharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnsaSharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnsaSharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AnsaSharedKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AnsaSharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AnsaSharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AnsaSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AnsaSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AnsaSharedKtor_httpURLProtocol : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AnsaSharedKtor_httpParameters <AnsaSharedKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface AnsaSharedKtor_httpURLBuilderCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol AnsaSharedKtor_httpParametersBuilder <AnsaSharedKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface AnsaSharedKtor_httpHttpMethodCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<AnsaSharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) AnsaSharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol AnsaSharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AnsaSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface AnsaSharedKotlinAbstractCoroutineContextKey<B, E> : AnsaSharedBase <AnsaSharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<AnsaSharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<AnsaSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface AnsaSharedKotlinx_coroutines_coreCoroutineDispatcherKey : AnsaSharedKotlinAbstractCoroutineContextKey<id<AnsaSharedKotlinContinuationInterceptor>, AnsaSharedKotlinx_coroutines_coreCoroutineDispatcher *>
@property (class, readonly, getter=shared) AnsaSharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<AnsaSharedKotlinCoroutineContextKey>)baseKey safeCast:(id<AnsaSharedKotlinCoroutineContextElement> _Nullable (^)(id<AnsaSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface AnsaSharedKtor_utilsWeekDayCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnsaSharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface AnsaSharedKtor_utilsMonthCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnsaSharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol AnsaSharedKotlinx_coroutines_coreParentJob <AnsaSharedKotlinx_coroutines_coreJob>
@required
- (AnsaSharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface AnsaSharedKotlinKTypeProjection : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<AnsaSharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) AnsaSharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
- (instancetype)initWithVariance:(AnsaSharedKotlinKVariance * _Nullable)variance type:(id<AnsaSharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKotlinKTypeProjection *)doCopyVariance:(AnsaSharedKotlinKVariance * _Nullable)variance type:(id<AnsaSharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface AnsaSharedKtor_httpUrlCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface AnsaSharedKtor_httpHeaderValueParam : AnsaSharedBase
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface AnsaSharedKtor_httpHeaderValueWithParametersCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<AnsaSharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface AnsaSharedKtor_httpContentTypeCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface AnsaSharedKotlinLongProgressionCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface AnsaSharedKotlinLongIterator : AnsaSharedBase <AnsaSharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnsaSharedLong *)next_ __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface AnsaSharedKotlinLongRangeCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.CurrentBalance")))
@interface AnsaSharedCustomer_implCustomerResponseCurrentBalance : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCustomerResponseCurrentBalanceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
- (instancetype)initWithAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCustomerResponseCurrentBalance *)doCopyAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.BillingDetails")))
@interface AnsaSharedCustomer_implCustomerResponseBillingDetails : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCustomerResponseBillingDetailsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
- (instancetype)initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("init(firstName:lastName:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCustomerResponseBillingDetails *)doCopyFirstName:(NSString *)firstName lastName:(NSString *)lastName __attribute__((swift_name("doCopy(firstName:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.AnsaMetadata")))
@interface AnsaSharedCustomer_implCustomerResponseAnsaMetadata : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCustomerResponseAnsaMetadataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *referralCode __attribute__((swift_name("referralCode")));
@property (readonly) AnsaSharedCustomer_implCustomerResponseSquare *square __attribute__((swift_name("square")));
@property (readonly) AnsaSharedCustomer_implCustomerResponseSquare *stripe __attribute__((swift_name("stripe")));
- (instancetype)initWithReferralCode:(NSString *)referralCode square:(AnsaSharedCustomer_implCustomerResponseSquare *)square stripe:(AnsaSharedCustomer_implCustomerResponseSquare *)stripe __attribute__((swift_name("init(referralCode:square:stripe:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCustomerResponseAnsaMetadata *)doCopyReferralCode:(NSString *)referralCode square:(AnsaSharedCustomer_implCustomerResponseSquare *)square stripe:(AnsaSharedCustomer_implCustomerResponseSquare *)stripe __attribute__((swift_name("doCopy(referralCode:square:stripe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.Companion")))
@interface AnsaSharedCustomer_implCustomerResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCustomerResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodResponse")))
@interface AnsaSharedCustomer_implPaymentMethodResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implPaymentMethodResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) AnsaSharedCustomer_implCardResponse *card __attribute__((swift_name("card")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithCard:(AnsaSharedCustomer_implCardResponse *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(card:id:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implPaymentMethodResponse *)doCopyCard:(AnsaSharedCustomer_implCardResponse *)card id:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(card:id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodsResponse.Companion")))
@interface AnsaSharedCustomer_implPaymentMethodsResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implPaymentMethodsResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCardResponse")))
@interface AnsaSharedCustomer_implCardResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCardResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *brand __attribute__((swift_name("brand")));
@property (readonly) NSString *fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) NSString *firstSix __attribute__((swift_name("firstSix")));
@property (readonly) NSString *lastFour __attribute__((swift_name("lastFour")));
- (instancetype)initWithBrand:(NSString *)brand fingerprint:(NSString *)fingerprint firstSix:(NSString *)firstSix lastFour:(NSString *)lastFour __attribute__((swift_name("init(brand:fingerprint:firstSix:lastFour:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCardResponse *)doCopyBrand:(NSString *)brand fingerprint:(NSString *)fingerprint firstSix:(NSString *)firstSix lastFour:(NSString *)lastFour __attribute__((swift_name("doCopy(brand:fingerprint:firstSix:lastFour:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddPaymentMethodResponse.Companion")))
@interface AnsaSharedCustomer_implAddPaymentMethodResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implAddPaymentMethodResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAutoReloadConfigurationResponse.Companion")))
@interface AnsaSharedCustomer_implAutoReloadConfigurationResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implAutoReloadConfigurationResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCurrentBalance")))
@interface AnsaSharedCustomer_implCurrentBalance : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCurrentBalanceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
- (instancetype)initWithAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCurrentBalance *)doCopyAmount:(int64_t)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implAddBalanceResponse.Companion")))
@interface AnsaSharedCustomer_implAddBalanceResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implAddBalanceResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUseBalanceResponse.Companion")))
@interface AnsaSharedCustomer_implUseBalanceResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implUseBalanceResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPresetReloadAmountResponse")))
@interface AnsaSharedCustomer_implPresetReloadAmountResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implPresetReloadAmountResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isMostPopular __attribute__((swift_name("isMostPopular")));
@property (readonly) int32_t promotionAmount __attribute__((swift_name("promotionAmount")));
- (instancetype)initWithId:(NSString *)id amount:(int32_t)amount promotionAmount:(int32_t)promotionAmount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("init(id:amount:promotionAmount:isMostPopular:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implPresetReloadAmountResponse *)doCopyId:(NSString *)id amount:(int32_t)amount promotionAmount:(int32_t)promotionAmount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("doCopy(id:amount:promotionAmount:isMostPopular:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implUserReloadConfigurationResponse.Companion")))
@interface AnsaSharedCustomer_implUserReloadConfigurationResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implUserReloadConfigurationResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implTransactionResponse.Companion")))
@interface AnsaSharedCustomer_implTransactionResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implTransactionResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implMetadataResponse")))
@interface AnsaSharedMerchant_implMetadataResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implMetadataResponseCompanion *companion __attribute__((swift_name("companion")));
@property AnsaSharedMerchant_implAppReloadConfigurationResponse *appReloadConfig __attribute__((swift_name("appReloadConfig")));
@property AnsaSharedMerchant_implAutoReloadConfigResponse *autoReloadConfig __attribute__((swift_name("autoReloadConfig")));
@property NSString * _Nullable omsProvider __attribute__((swift_name("omsProvider")));
@property NSString * _Nullable paymentProcessor __attribute__((swift_name("paymentProcessor")));
@property AnsaSharedMerchant_implPromotionsResponse *promotions __attribute__((swift_name("promotions")));
@property AnsaSharedMerchant_implUserReferralConfigResponse *userReferralConfig __attribute__((swift_name("userReferralConfig")));
- (instancetype)initWithAppReloadConfig:(AnsaSharedMerchant_implAppReloadConfigurationResponse *)appReloadConfig autoReloadConfig:(AnsaSharedMerchant_implAutoReloadConfigResponse *)autoReloadConfig omsProvider:(NSString * _Nullable)omsProvider paymentProcessor:(NSString * _Nullable)paymentProcessor promotions:(AnsaSharedMerchant_implPromotionsResponse *)promotions userReferralConfig:(AnsaSharedMerchant_implUserReferralConfigResponse *)userReferralConfig __attribute__((swift_name("init(appReloadConfig:autoReloadConfig:omsProvider:paymentProcessor:promotions:userReferralConfig:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implMetadataResponse *)doCopyAppReloadConfig:(AnsaSharedMerchant_implAppReloadConfigurationResponse *)appReloadConfig autoReloadConfig:(AnsaSharedMerchant_implAutoReloadConfigResponse *)autoReloadConfig omsProvider:(NSString * _Nullable)omsProvider paymentProcessor:(NSString * _Nullable)paymentProcessor promotions:(AnsaSharedMerchant_implPromotionsResponse *)promotions userReferralConfig:(AnsaSharedMerchant_implUserReferralConfigResponse *)userReferralConfig __attribute__((swift_name("doCopy(appReloadConfig:autoReloadConfig:omsProvider:paymentProcessor:promotions:userReferralConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implMerchantResponse.Companion")))
@interface AnsaSharedMerchant_implMerchantResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implMerchantResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AnsaSharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AnsaSharedKotlinKClass>)kClass provider:(id<AnsaSharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AnsaSharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AnsaSharedKotlinKClass>)kClass serializer:(id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AnsaSharedKotlinKClass>)baseClass actualClass:(id<AnsaSharedKotlinKClass>)actualClass actualSerializer:(id<AnsaSharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AnsaSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AnsaSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<AnsaSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AnsaSharedKotlinKClass>)baseClass defaultSerializerProvider:(id<AnsaSharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface AnsaSharedKtor_httpURLProtocolCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) AnsaSharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, AnsaSharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (AnsaSharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface AnsaSharedKotlinKVariance : AnsaSharedKotlinEnum<AnsaSharedKotlinKVariance *>
@property (class, readonly) AnsaSharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) AnsaSharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) AnsaSharedKotlinKVariance *out __attribute__((swift_name("out")));
@property (class, readonly) NSArray<AnsaSharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (AnsaSharedKotlinArray<AnsaSharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface AnsaSharedKotlinKTypeProjectionCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnsaSharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnsaSharedKotlinKTypeProjection *)contravariantType:(id<AnsaSharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnsaSharedKotlinKTypeProjection *)covariantType:(id<AnsaSharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnsaSharedKotlinKTypeProjection *)invariantType:(id<AnsaSharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.CurrentBalanceCompanion")))
@interface AnsaSharedCustomer_implCustomerResponseCurrentBalanceCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCustomerResponseCurrentBalanceCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.BillingDetailsCompanion")))
@interface AnsaSharedCustomer_implCustomerResponseBillingDetailsCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCustomerResponseBillingDetailsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.Square")))
@interface AnsaSharedCustomer_implCustomerResponseSquare : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedCustomer_implCustomerResponseSquareCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *customerID __attribute__((swift_name("customerID")));
- (instancetype)initWithCustomerID:(NSString *)customerID __attribute__((swift_name("init(customerID:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedCustomer_implCustomerResponseSquare *)doCopyCustomerID:(NSString *)customerID __attribute__((swift_name("doCopy(customerID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.AnsaMetadataCompanion")))
@interface AnsaSharedCustomer_implCustomerResponseAnsaMetadataCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCustomerResponseAnsaMetadataCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPaymentMethodResponse.Companion")))
@interface AnsaSharedCustomer_implPaymentMethodResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implPaymentMethodResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCardResponse.Companion")))
@interface AnsaSharedCustomer_implCardResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCardResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCurrentBalance.Companion")))
@interface AnsaSharedCustomer_implCurrentBalanceCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCurrentBalanceCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implPresetReloadAmountResponse.Companion")))
@interface AnsaSharedCustomer_implPresetReloadAmountResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implPresetReloadAmountResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implAppReloadConfigurationResponse")))
@interface AnsaSharedMerchant_implAppReloadConfigurationResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implAppReloadConfigurationResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowCustomAmount __attribute__((swift_name("allowCustomAmount")));
@property (readonly) NSArray<AnsaSharedMerchant_implPresetReloadAmountResponse *> *presetAmounts __attribute__((swift_name("presetAmounts")));
- (instancetype)initWithAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedMerchant_implPresetReloadAmountResponse *> *)presetAmounts __attribute__((swift_name("init(allowCustomAmount:presetAmounts:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implAppReloadConfigurationResponse *)doCopyAllowCustomAmount:(BOOL)allowCustomAmount presetAmounts:(NSArray<AnsaSharedMerchant_implPresetReloadAmountResponse *> *)presetAmounts __attribute__((swift_name("doCopy(allowCustomAmount:presetAmounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implAutoReloadConfigResponse")))
@interface AnsaSharedMerchant_implAutoReloadConfigResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implAutoReloadConfigResponseCompanion *companion __attribute__((swift_name("companion")));
@property int32_t maximumAutoReloadAmount __attribute__((swift_name("maximumAutoReloadAmount")));
@property int32_t minimumAutoReloadAmount __attribute__((swift_name("minimumAutoReloadAmount")));
@property int32_t minimumAutoReloadThreshold __attribute__((swift_name("minimumAutoReloadThreshold")));
- (instancetype)initWithMaximumAutoReloadAmount:(int32_t)maximumAutoReloadAmount minimumAutoReloadAmount:(int32_t)minimumAutoReloadAmount minimumAutoReloadThreshold:(int32_t)minimumAutoReloadThreshold __attribute__((swift_name("init(maximumAutoReloadAmount:minimumAutoReloadAmount:minimumAutoReloadThreshold:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implAutoReloadConfigResponse *)doCopyMaximumAutoReloadAmount:(int32_t)maximumAutoReloadAmount minimumAutoReloadAmount:(int32_t)minimumAutoReloadAmount minimumAutoReloadThreshold:(int32_t)minimumAutoReloadThreshold __attribute__((swift_name("doCopy(maximumAutoReloadAmount:minimumAutoReloadAmount:minimumAutoReloadThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implPromotionsResponse")))
@interface AnsaSharedMerchant_implPromotionsResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implPromotionsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<AnsaSharedMerchant_implRewardTierResponse *> *tiers __attribute__((swift_name("tiers")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
- (instancetype)initWithTiers:(NSArray<AnsaSharedMerchant_implRewardTierResponse *> *)tiers type:(NSString *)type __attribute__((swift_name("init(tiers:type:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implPromotionsResponse *)doCopyTiers:(NSArray<AnsaSharedMerchant_implRewardTierResponse *> *)tiers type:(NSString *)type __attribute__((swift_name("doCopy(tiers:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implUserReferralConfigResponse")))
@interface AnsaSharedMerchant_implUserReferralConfigResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implUserReferralConfigResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@property int32_t recipientCreditAmount __attribute__((swift_name("recipientCreditAmount")));
@property NSString *redemptionEvent __attribute__((swift_name("redemptionEvent")));
@property int32_t redemptionThresholdAmount __attribute__((swift_name("redemptionThresholdAmount")));
@property int32_t senderCreditAmount __attribute__((swift_name("senderCreditAmount")));
- (instancetype)initWithEnabled:(BOOL)enabled recipientCreditAmount:(int32_t)recipientCreditAmount redemptionEvent:(NSString *)redemptionEvent redemptionThresholdAmount:(int32_t)redemptionThresholdAmount senderCreditAmount:(int32_t)senderCreditAmount __attribute__((swift_name("init(enabled:recipientCreditAmount:redemptionEvent:redemptionThresholdAmount:senderCreditAmount:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implUserReferralConfigResponse *)doCopyEnabled:(BOOL)enabled recipientCreditAmount:(int32_t)recipientCreditAmount redemptionEvent:(NSString *)redemptionEvent redemptionThresholdAmount:(int32_t)redemptionThresholdAmount senderCreditAmount:(int32_t)senderCreditAmount __attribute__((swift_name("doCopy(enabled:recipientCreditAmount:redemptionEvent:redemptionThresholdAmount:senderCreditAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implMetadataResponse.Companion")))
@interface AnsaSharedMerchant_implMetadataResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implMetadataResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer_implCustomerResponse.SquareCompanion")))
@interface AnsaSharedCustomer_implCustomerResponseSquareCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedCustomer_implCustomerResponseSquareCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implPresetReloadAmountResponse")))
@interface AnsaSharedMerchant_implPresetReloadAmountResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implPresetReloadAmountResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t amount __attribute__((swift_name("amount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isMostPopular __attribute__((swift_name("isMostPopular")));
- (instancetype)initWithId:(NSString *)id amount:(int32_t)amount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("init(id:amount:isMostPopular:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implPresetReloadAmountResponse *)doCopyId:(NSString *)id amount:(int32_t)amount isMostPopular:(BOOL)isMostPopular __attribute__((swift_name("doCopy(id:amount:isMostPopular:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implAppReloadConfigurationResponse.Companion")))
@interface AnsaSharedMerchant_implAppReloadConfigurationResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implAppReloadConfigurationResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implAutoReloadConfigResponse.Companion")))
@interface AnsaSharedMerchant_implAutoReloadConfigResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implAutoReloadConfigResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implRewardTierResponse")))
@interface AnsaSharedMerchant_implRewardTierResponse : AnsaSharedBase
@property (class, readonly, getter=companion) AnsaSharedMerchant_implRewardTierResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t minTransactionRequirement __attribute__((swift_name("minTransactionRequirement")));
@property (readonly) int32_t promotionAmount __attribute__((swift_name("promotionAmount")));
- (instancetype)initWithMinTransactionRequirement:(int32_t)minTransactionRequirement promotionAmount:(int32_t)promotionAmount __attribute__((swift_name("init(minTransactionRequirement:promotionAmount:)"))) __attribute__((objc_designated_initializer));
- (AnsaSharedMerchant_implRewardTierResponse *)doCopyMinTransactionRequirement:(int32_t)minTransactionRequirement promotionAmount:(int32_t)promotionAmount __attribute__((swift_name("doCopy(minTransactionRequirement:promotionAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implPromotionsResponse.Companion")))
@interface AnsaSharedMerchant_implPromotionsResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implPromotionsResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implUserReferralConfigResponse.Companion")))
@interface AnsaSharedMerchant_implUserReferralConfigResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implUserReferralConfigResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implPresetReloadAmountResponse.Companion")))
@interface AnsaSharedMerchant_implPresetReloadAmountResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implPresetReloadAmountResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Merchant_implRewardTierResponse.Companion")))
@interface AnsaSharedMerchant_implRewardTierResponseCompanion : AnsaSharedBase
@property (class, readonly, getter=shared) AnsaSharedMerchant_implRewardTierResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AnsaSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
