/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSDictionary, NSString, NSNumber;



@interface MCSCEPPayloadHandler : MCIdentityCertificatePayloadHandler 
{
    NSDictionary *_payload_dict;
    void *_subject;
    NSInteger _phase;
    struct __CFDictionary { } *_keygen_parameters;
    NSString *_scep_base_url;
    NSString *_scep_instance_name;
    NSString *_scep_challenge;
    BOOL _scep_challenge_skipped;
    NSArray *_scep_subject;
    NSNumber *_scep_key_usage;
    struct __CFData { } *_certificate;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (BOOL)shouldValidateCommonAttributes;

- (id)initWithPayload:(id)arg1;
- (id)certificateData;
- (void)dealloc;
- (id)scepURLWithBase:(id)arg1 operation:(id)arg2 instance:(id)arg3;
- (struct __SecCertificate { }*)getCACert:(id)arg1 instance:(id)arg2;
- (id)validateSCEPAttributes:(id)arg1;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (id)userPromptValues;
- (void)setUserPromptedValues:(id)arg1;
- (id)preparePayload;
- (id)performInstallStep;
- (id)installPayload;
- (id)displayName;
- (id)rootDisplayName;
- (id)detailDescription;
- (id)customTitleForCurrentInstallPhase;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)scep_details;
- (id)removePayloadWithRoot:(id)arg1;

@end
