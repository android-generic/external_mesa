/*
 * Copyright 2024 Google LLC
 * SPDX-License-Identifier: MIT
 */

#include "gfxstream/guest/GfxStreamGralloc.h"
#include "util/detect_os.h"

#if DETECT_OS_ANDROID

#include <string>

#include "GrallocGoldfish.h"
#include "GrallocMinigbm.h"
#include <cutils/properties.h>

namespace gfxstream {

Gralloc* createPlatformGralloc(int32_t descriptor) {
    char def_value[PROPERTY_VALUE_MAX] = "minigbm";
    char def_value2[PROPERTY_VALUE_MAX] = "minigbm_arcvm";
    if (property_get("ro.hardware.gralloc", def_value, NULL) > 0 ||
     property_get("ro.hardware.gralloc", def_value2, NULL) > 0) {
        auto gralloc = new MinigbmGralloc(descriptor);
        return gralloc;
    }
    return new GoldfishGralloc();
}

}  // namespace gfxstream

#endif
