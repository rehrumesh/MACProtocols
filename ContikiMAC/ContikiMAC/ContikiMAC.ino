//ContikiMCAC arduino implementation for ATtiny85 and NRF24L01

// #define SHORTESET_PACKET_SIZE 43



//CCA_COUNT_MAX is the number of CCAs to be done for each periodic channel check. Default is 2

#ifdef CONTIKIMAC_CONF_CCA_COUNT_MAX
#define CCA_COUNT_MAX (CONTIKIMAC_CONF_CCA_COUNT_MAX)
#else
#define CCA_COUNT_MAX 2
#endif

void setup(){

}

void loop(){

}


void on(){
  // turn on the radio
}

void off(){
  //turn off the radio
}
