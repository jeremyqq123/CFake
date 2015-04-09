/*
 * Copyright 2015 Nokia
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/******************************************************************************
 * @File    CFakeHw.h
 * @Brief   It provide hardware related interface for internal use in CFake.
 ******************************************************************************/

#ifndef __C_FAKE_HW_H__
#define __C_FAKE_HW_H__

#ifdef __cplusplus
    extern "C" {
#endif

#include "CFakeTypes.h"

typedef struct SFakeHw {
    TFakeUInt (* GetCodeSize)(void);

    void (* MakeCode)   (SFakeConfigParam * configParamPtr, TFakeU8 * msgPtr);
    void (* EnableCode) (SFakeConfigParam * configParamPtr, TFakeU8 * msgPtr);
    void (* DisableCode)(SFakeConfigParam * configParamPtr, TFakeU8 * msgPtr);

    TFakeUInt const msgSize;
} SFakeHw;

extern SFakeHw gFakeHw;

#ifdef __cplusplus
}
#endif

#endif /* __C_FAKE_HW_H__ */
