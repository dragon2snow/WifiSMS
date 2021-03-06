/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIAlphaAnimation, TPBottomLockBar;



@interface TPLockKnobView : UIImageView 
{
    TPBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    float _centerDelta;
    BOOL _tracking;
}


- (id)initWithImage:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setLockView:(id)arg1;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
