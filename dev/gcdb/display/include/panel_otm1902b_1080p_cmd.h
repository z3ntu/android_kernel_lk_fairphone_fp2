/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_OTM1902B_1080P_CMD_H_

#define _PANEL_OTM1902B_1080P_CMD_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config otm1902b_1080p_cmd_panel_data = {
  "qcom,mdss_dsi_otm1902b_1080p_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 1, "DISPLAY_1", 0, 424000000, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution otm1902b_1080p_cmd_panel_res = {
  1080, 1920, 40, 64, 8, 0, 6, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info otm1902b_1080p_cmd_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char otm1902b_1080p_cmd_on_cmd0[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xFF, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd1[] = {
0x02, 0x00, 0x29, 0xC0,
0x19, 0x02, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd2[] = {
0x02, 0x00, 0x29, 0xC0,
0x01, 0x00, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd3[] = {
0x02, 0x00, 0x29, 0xC0,
0x80, 0xFF, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd4[] = {
0x02, 0x00, 0x29, 0xC0,
0x19, 0x02, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd5[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x83, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd6[] = {
0x02, 0x00, 0x29, 0xC0,
0xF3, 0xCA, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd7[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x90, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd8[] = {
0x02, 0x00, 0x29, 0xC0,
0xc4, 0x00, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd9[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xB4, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd10[] = {
0x02, 0x00, 0x29, 0xC0,
0xC0, 0xC0, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd11[] = {
0x02, 0x00, 0x29, 0xC0,
0x2A, 0x00, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd12[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x04, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd13[] = {
0x02, 0x00, 0x29, 0xC0,
0x37, 0x2B, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd14[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd15[] = {
0x02, 0x00, 0x29, 0xC0,
0x07, 0x7F, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd16[] = {
0x02, 0x00, 0x29, 0xC0,
0x53, 0x2C, 0xFF, 0xFF,  };


static char otm1902b_1080p_cmd_on_cmd17[] = {
0x02, 0x00, 0x29, 0xC0,
0x51, 0xFF, 0xFF, 0xFF,  };

static char otm1902b_1080p_cmd_on_cmd18[] = {
0x11, 0x00, 0x05, 0x80,  };

static char otm1902b_1080p_cmd_on_cmd19[] = {
0x29, 0x00, 0x05, 0x80,   };

static struct mipi_dsi_cmd otm1902b_1080p_cmd_on_command[] = {
{ 0x8 , otm1902b_1080p_cmd_on_cmd0 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd1 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd2 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd3 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd4 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd5 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd6 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd7 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd8 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd9 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd10 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd11 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd12 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd13 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd14 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd15 ,0x01},
{ 0x8 , otm1902b_1080p_cmd_on_cmd16 ,0x01},
{ 0x4 , otm1902b_1080p_cmd_on_cmd18 , 0x32},
{ 0x4 , otm1902b_1080p_cmd_on_cmd19 , 0x60},
};
#define OTM1902B_1080P_CMD_ON_COMMAND 19

static char otm1902b_1080p_cmdoff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char otm1902b_1080p_cmdoff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd otm1902b_1080p_cmd_off_command[] = {
{ 0x4 , otm1902b_1080p_cmdoff_cmd0 , 0x32},
{ 0x4 , otm1902b_1080p_cmdoff_cmd1 , 0x64}
};
#define OTM1902B_1080P_CMD_OFF_COMMAND 2


static struct command_state otm1902b_1080p_cmd_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info otm1902b_1080p_cmd_command_panel = {
  1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info otm1902b_1080p_cmd_video_panel = {
  1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration otm1902b_1080p_cmd_lane_config = {
  4, 0, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t otm1902b_1080p_cmd_timings[] = {
  0xd5, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};



//static struct mipi_dsi_cmd otm1902b_1080p_cmd_rotation[] = {

//};
//#define OTM1902B_1080P_CMD_ROTATION 0


static struct panel_timing otm1902b_1080p_cmd_timing_info = {
  0, 4, 0x1e, 0x38
};

static struct panel_reset_sequence otm1902b_1080p_cmd_panel_reset_seq = {
{ 1, 0, 1, }, { 20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight otm1902b_1080p_cmd_backlight = {
  1, 0, 255, 100, 2, "PMIC_8941"
};



#endif /*_PANEL_OTM1902B_1080P_CMD_H_*/
