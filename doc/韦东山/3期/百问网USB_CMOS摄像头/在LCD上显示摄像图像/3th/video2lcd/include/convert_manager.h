
#ifndef _CONVERT_MANAGER_H
#define _CONVERT_MANAGER_H

#include <config.h>
#include <video_manager.h>

typedef struct VideoConvert {
    int (*isSupport)(int iPixelFormatIn, int iPixelFormatOut);
    int (*Convert)(PT_VideoBuf ptVideoBufIn, PT_VideoBuf ptVideoBufOut);
    int (*ConvertExit)(PT_VideoBuf ptVideoBufOut);
}T_VideoConvert, *PT_VideoConvert;


#endif /* _CONVERT_MANAGER_H */

