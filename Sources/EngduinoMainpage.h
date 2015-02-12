
/**
\mainpage Engduino Libraries
<CENTER>Copyright &copy; 2014 by Engduino Team
</CENTER>

The Engduino is an inexpensive Arduino clone that is intended primarily for teaching schoolchildren about programming and system development in a way that is engaging, fun and that can integrate with other parts of their curriculum.To make things relatively straightforward, we have hidden a lot of details about the hardware in libraries which can be called from within a sketch in a relatively simple and straightforward way. This is Doxygen-generated documentation that provides the essential documentation of library functionality. It is not intended for children learning to program, but it provides a point of reference for the more sophisticated developer.

There are 9 libraries for the Engduino, corresponding to the hardware devices connected.

\section LEDs The LEDs
The Engduino has 16 LEDs with independent red, green and blue channels. The LED driver is used to set the colour and brightness of the LEDs.

\see
  \link EngduinoLEDsClass The Engduino LED Documentation \endlink


\section Button The Button
The Engduino has a single button. Unfortunately, when pressed, buttons bounce and so just reading the voltage on the pin connected to the button can be misleading. This library provides some code for 'debouncing' - in essence providing a reading of the button that is stable and accurately reflects whether it is pushed or not.

\see
  \link EngduinoButtonClass The Engduino Button Documentation \endlink


\section Thermistor The Thermistor
The Engduino has a thermistor - which is a device whose resistance depends on the temperature. This is connected in such a way as to allow the Engduino to measure temperature. This library provides the ability to read the temperature in a number of forms: CELSIUS (default), KELVIN and FARENHEIT.

\see
  \link EngduinoThermistorClass The Engduino Thermistor Documentation \endlink


\section Light The Light Sensor
The Engduino has a light sensor that is capable of measuring the amount of light it can see. This is a very simple library because the reading is taken from an analogue input and the value returned simply reflects the ADC reading on that input.

\see
  \link EngduinoLightClass The Engduino Light Sensor Documentation \endlink


\section Accelerometer The Accelerometer Sensor
The Engduino has a 3D accelerometer. As the name suggests, this allows one to read accelerations in each of 3 dimensions, which are defined in terms of the orientation of the accelerometer chip. This is a library that simply returns the acceleration in each of those three dimensions.

\see
  \link EngduinoAccelerometerClass The Engduino Accelerometer Documentation \endlink


\section IR The IR
Finally, the Engduino has the ability to communicate with another Engduino wirelessly - but using infra-red rather than radio, a bit like a remote control. The range of this communication is very short - a metre or so - but it is possible for the Engduino to pick up normal remote controls from a much greater distance.

\see
  \link EngduinoIRClass The Engduino Infrared Communications Documentation \endlink


\section Magnetometer The Magnetometer
The Engduino has a 3D magnetometer. As the name suggests, this allows one to read magnetic field strength in each of 3 dimensions, which are defined in terms of the orientation of the magnetometer chip. This is a library that simply returns the magnetic field in each of those three dimensions. However interpreting this data is challenging since the values are raw and uncalibrated.

\see
  \link EngduinoMagnetometerClass The Engduino Magnetometer Documentation \endlink


\section SD The SD Card
The Engduino has a micro SD slot. SD card enables to save data on it and read them later when needed. It's also enables read fro it different configurations used by your sketch. This library aims to expose a subset of SD card functionality in the form of a higher level "wrapper" object. Maximum size of attached SD card is 4GB.

\see
  \link EngduinoSDClass The Engduino SD Card Documentation \endlink


\section Protocol The Protocol
The Engduino has a support for controlling it with the simple instructions set over the Serial or Bluetooth communication. Instructions can be send and receive over the Serial terminal on PC or over the Bluetooth terminal on smart device or PC. It's enables hi-level communication between Engduino board and external programs like Matlab, applications written in Visual Studio, Java, etc. In the case of Bluetooth communication Bluetooth extension board for Engduino need to be used.

\see
  \link EngduinoProtocolClass The Engduino Protocol Documentation \endlink
 */