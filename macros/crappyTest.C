#include "CTSEvent.h"
#include "Module.h"

int main()
{
  CTSEvent event;

  Signal signal;
  signal.setToT(5);
  signal.setLayer(6);
  signal.setChannelID(15);


  printf("ToT: %g\n", signal.getToT());


  Fiber fiber;
  fiber.addSignal(signal);

  printf("nSignals: %d\n", fiber.getNSignals());

  Signal signal2;
  signal2.setLayer(3);
  signal2.setChannelID(15);

  Signal signal3;
  signal3.setLayer(3);
  signal3.setChannelID(15);

  Signal signal4;
  signal4.setLayer(2);
  signal4.setChannelID(10);

  Module module;
  module.addSignal(signal);
  module.addSignal(signal2);
  module.addSignal(signal3);
  module.addSignal(signal4);

  printf("signals in module: %g\n", module.getNSignals());


  return 0;
}