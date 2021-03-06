/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 165
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define F_CPU 16000000L
#define ARDUINO 165
#define ARDUINO_AVR_MEGA2560
#define ARDUINO_ARCH_AVR
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\avr\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino\arduino.h"
#include <Marlin.pde>
#include <Conditionals.h>
#include <Configuration.h>
#include <Configuration_adv.h>
#include <Marlin.h>
#include <Marlin.ino>
#include <MarlinSerial.cpp>
#include <MarlinSerial.h>
#include <Marlin_main.cpp>
#include <SanityCheck.h>
#include <Sd2Card.cpp>
#include <Sd2Card.h>
#include <Sd2PinMap.h>
#include <SdBaseFile.cpp>
#include <SdBaseFile.h>
#include <SdFatConfig.h>
#include <SdFatStructs.h>
#include <SdFatUtil.cpp>
#include <SdFatUtil.h>
#include <SdFile.cpp>
#include <SdFile.h>
#include <SdInfo.h>
#include <SdVolume.cpp>
#include <SdVolume.h>
#include <blinkm.cpp>
#include <blinkm.h>
#include <boards.h>
#include <cardreader.cpp>
#include <cardreader.h>
#include <configuration_store.cpp>
#include <configuration_store.h>
#include <digipot_mcp4451.cpp>
#include <dogm_bitmaps.h>
#include <dogm_font_data_6x9_marlin.h>
#include <dogm_font_data_HD44780_C.h>
#include <dogm_font_data_HD44780_J.h>
#include <dogm_font_data_HD44780_W.h>
#include <dogm_font_data_ISO10646_1.h>
#include <dogm_font_data_ISO10646_5_Cyrillic.h>
#include <dogm_font_data_ISO10646_CN.h>
#include <dogm_font_data_ISO10646_Kana.h>
#include <dogm_font_data_Marlin_symbols.h>
#include <dogm_lcd_implementation.h>
#include <fastio.h>
#include <language.h>
#include <language_an.h>
#include <language_ca.h>
#include <language_cn.h>
#include <language_de.h>
#include <language_en.h>
#include <language_es.h>
#include <language_eu.h>
#include <language_fi.h>
#include <language_fr.h>
#include <language_it.h>
#include <language_kana.h>
#include <language_kana_utf8.h>
#include <language_nl.h>
#include <language_pl.h>
#include <language_pt-br.h>
#include <language_pt.h>
#include <language_ru.h>
#include <language_test.h>
#include <mesh_bed_leveling.cpp>
#include <mesh_bed_leveling.h>
#include <motion_control.cpp>
#include <motion_control.h>
#include <pins.h>
#include <pins_3DRAG.h>
#include <pins_5DPRINT.h>
#include <pins_99.h>
#include <pins_AZTEEG_X1.h>
#include <pins_AZTEEG_X3.h>
#include <pins_AZTEEG_X3_PRO.h>
#include <pins_BAM_DICE_DUE.h>
#include <pins_BRAINWAVE.h>
#include <pins_BRAINWAVE_PRO.h>
#include <pins_CHEAPTRONIC.h>
#include <pins_DUEMILANOVE_328P.h>
#include <pins_ELEFU_3.h>
#include <pins_FELIX2.h>
#include <pins_GEN3_MONOLITHIC.h>
#include <pins_GEN3_PLUS.h>
#include <pins_GEN6.h>
#include <pins_GEN6_DELUXE.h>
#include <pins_GEN7_12.h>
#include <pins_GEN7_13.h>
#include <pins_GEN7_14.h>
#include <pins_GEN7_CUSTOM.h>
#include <pins_HEPHESTOS.h>
#include <pins_K8200.h>
#include <pins_LEAPFROG.h>
#include <pins_MEGATRONICS.h>
#include <pins_MEGATRONICS_1.h>
#include <pins_MEGATRONICS_2.h>
#include <pins_MEGATRONICS_3.h>
#include <pins_MELZI.h>
#include <pins_MELZI_1284.h>
#include <pins_OMCA.h>
#include <pins_OMCA_A.h>
#include <pins_PRINTRBOARD.h>
#include <pins_RAMBO.h>
#include <pins_RAMPS_13.h>
#include <pins_RAMPS_OLD.h>
#include <pins_RUMBA.h>
#include <pins_SANGUINOLOLU_11.h>
#include <pins_SANGUINOLOLU_12.h>
#include <pins_SAV_MKI.h>
#include <pins_SETHI.h>
#include <pins_STB_11.h>
#include <pins_TEENSY2.h>
#include <pins_TEENSYLU.h>
#include <pins_ULTIMAIN_2.h>
#include <pins_ULTIMAKER.h>
#include <pins_ULTIMAKER_OLD.h>
#include <pins_WITBOX.h>
#include <planner.cpp>
#include <planner.h>
#include <qr_solve.cpp>
#include <qr_solve.h>
#include <servo.cpp>
#include <servo.h>
#include <speed_lookuptable.h>
#include <stepper.cpp>
#include <stepper.h>
#include <stepper_indirection.cpp>
#include <stepper_indirection.h>
#include <temperature.cpp>
#include <temperature.h>
#include <thermistortables.h>
#include <ultralcd.cpp>
#include <ultralcd.h>
#include <ultralcd_implementation_hitachi_HD44780.h>
#include <ultralcd_st7920_u8glib_rrd.h>
#include <utf_mapper.h>
#include <vector_3.cpp>
#include <vector_3.h>
#include <watchdog.cpp>
#include <watchdog.h>
