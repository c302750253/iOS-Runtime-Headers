/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoutingController;

@interface MPAVDestinationBrowser : NSObject {
    MPAVRoutingController *_routingController;
    bool_isScanning;
    bool_scansForDestinationsWhenEnteringForeground;
}

@property bool scansForDestinationsWhenEnteringForeground;

- (void).cxx_destruct;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (void)endScanningForDestinations;
- (id)init;
- (bool)scansForDestinationsWhenEnteringForeground;
- (void)setScansForDestinationsWhenEnteringForeground:(bool)arg1;

@end
