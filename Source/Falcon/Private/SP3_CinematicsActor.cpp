#include "SP3_CinematicsActor.h"




bool ASP3_CinematicsActor::IsFinished_Implementation() {
    return false;
}

ASP3_CinematicsActor::ASP3_CinematicsActor() {
    this->MovieFile = NULL;
    this->StartupDelay = 0.50f;
    this->Finished = false;
}

