#include "TfbWiseExtensionsBPLibrary.h"

class AActor;
class UAkAudioEvent;

int32 UTfbWiseExtensionsBPLibrary::PostTerminatingEvent(UAkAudioEvent* AkEvent, AActor* Actor, UTfbWiseExtensionsBPLibrary::FAudioParameterDelegate Delegate) {
    return 0;
}

UTfbWiseExtensionsBPLibrary::UTfbWiseExtensionsBPLibrary() {
}

