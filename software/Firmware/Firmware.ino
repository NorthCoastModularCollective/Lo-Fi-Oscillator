#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthNoiseWhite     noise2;         //xy=57,410
AudioSynthWaveform       waveform1;      //xy=64,214
AudioSynthNoiseWhite     noise1;         //xy=64,250
AudioSynthWaveform       waveform2;      //xy=64,373
AudioMixer4              WaveformSelect2;         //xy=238,389
AudioMixer4              WaveformSelect1;         //xy=241,235
AudioEffectWaveFolder    wavefolder2; //xy=414,393
AudioEffectWaveFolder    wavefolder1;    //xy=415,243
AudioEffectBitcrusher    bitcrusher2;    //xy=576,394
AudioEffectBitcrusher    bitcrusher1;    //xy=578,242
AudioFilterStateVariable filter2; //xy=715,363
AudioFilterStateVariable filter1;        //xy=719,212
AudioMixer4              filtermixer1;         //xy=856,255
AudioMixer4              filtermixer2;         //xy=862,402
AudioEffectEnvelope      envelope2;      //xy=1007,402
AudioEffectEnvelope      envelope1;      //xy=1014,230
AudioMixer4              EnvelopeMixer1;         //xy=1186,274
AudioOutputPT8211        pt8211_1;       //xy=1372,394
AudioConnection          patchCord1(noise2, 0, WaveformSelect2, 1);
AudioConnection          patchCord2(waveform1, 0, WaveformSelect1, 0);
AudioConnection          patchCord3(noise1, 0, WaveformSelect1, 1);
AudioConnection          patchCord4(waveform2, 0, WaveformSelect2, 0);
AudioConnection          patchCord5(WaveformSelect2, 0, wavefolder2, 0);
AudioConnection          patchCord6(WaveformSelect1, 0, wavefolder1, 0);
AudioConnection          patchCord7(wavefolder2, bitcrusher2);
AudioConnection          patchCord8(wavefolder1, bitcrusher1);
AudioConnection          patchCord9(bitcrusher2, 0, filter2, 0);
AudioConnection          patchCord10(bitcrusher2, 0, filtermixer2, 3);
AudioConnection          patchCord11(bitcrusher1, 0, filter1, 0);
AudioConnection          patchCord12(bitcrusher1, 0, filtermixer1, 3);
AudioConnection          patchCord13(filter2, 0, filtermixer2, 0);
AudioConnection          patchCord14(filter2, 1, filtermixer2, 1);
AudioConnection          patchCord15(filter2, 2, filtermixer2, 2);
AudioConnection          patchCord16(filter1, 0, filtermixer1, 0);
AudioConnection          patchCord17(filter1, 1, filtermixer1, 1);
AudioConnection          patchCord18(filter1, 2, filtermixer1, 2);
AudioConnection          patchCord19(filtermixer1, envelope1);
AudioConnection          patchCord20(filtermixer1, 0, EnvelopeMixer1, 1);
AudioConnection          patchCord21(filtermixer2, envelope2);
AudioConnection          patchCord22(envelope2, 0, pt8211_1, 1);
AudioConnection          patchCord23(envelope1, 0, EnvelopeMixer1, 0);
AudioConnection          patchCord24(EnvelopeMixer1, 0, pt8211_1, 0);
// GUItool: end automatically generated code


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
