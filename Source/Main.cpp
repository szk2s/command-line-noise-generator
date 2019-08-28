/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a JUCE application.

  ==============================================================================
*/
#include "../JuceLibraryCode/JuceHeader.h"
#include <iostream>
//==============================================================================
void playTestSound()
{
    AudioDeviceManager deviceManager;
    deviceManager.initialise(255,255, nullptr, true);
    deviceManager.playTestSound();
    Thread::sleep(2000);
}

//==============================================================================
int main (int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;
    ScopedJuceInitialiser_GUI plattform;
    playTestSound();
    return 0;
}