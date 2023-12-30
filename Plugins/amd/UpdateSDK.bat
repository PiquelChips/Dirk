# This file is part of the FidelityFX Super Resolution 3.0 Unreal Engine Plugin.
#
# Copyright (C) 2023 Advanced Micro Devices, Inc.
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this softwareand associated documentation files(the “Software”), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions :
# 
# The above copyright noticeand this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.

@echo off
setlocal
pushd "%~dp0"

del /q FSR3\Source\fidelityfx-hlsl\*.hlsl
del /q FSR3\Source\fidelityfx-hlsl\frameinterpolation\spd\*.h
del /q FSR3\Source\fidelityfx-hlsl\frameinterpolation\*.h
del /q FSR3\Source\fidelityfx-hlsl\fsr3upscaler\*.h
del /q FSR3\Source\fidelityfx-hlsl\opticalflow\*.h
del /q FSR3\Source\fidelityfx-hlsl\spd\*.h
del /q FSR3\Source\fidelityfx-hlsl\fsr1\*.h
del /q FSR3\Source\fidelityfx-hlsl\fsr3upscaler\spd\*.h
del /q FSR3\Source\fidelityfx-hlsl\fsr3upscaler\fsr1\*.h
del /q FSR3\Source\fidelityfx-hlsl\opticalflow\spd\*.h
del /q FSR3\Source\fidelityfx-hlsl\opticalflow\opticalflow\*.h

mkdir FSR3\Source\fidelityfx-hlsl
mkdir FSR3\Source\fidelityfx-hlsl\frameinterpolation
mkdir FSR3\Source\fidelityfx-hlsl\frameinterpolation\spd
mkdir FSR3\Source\fidelityfx-hlsl\fsr3upscaler
mkdir FSR3\Source\fidelityfx-hlsl\opticalflow
mkdir FSR3\Source\fidelityfx-hlsl\spd
mkdir FSR3\Source\fidelityfx-hlsl\fsr1
mkdir FSR3\Source\fidelityfx-hlsl\fsr3upscaler\spd
mkdir FSR3\Source\fidelityfx-hlsl\fsr3upscaler\fsr1
mkdir FSR3\Source\fidelityfx-hlsl\opticalflow\spd
mkdir FSR3\Source\fidelityfx-hlsl\opticalflow\opticalflow

xcopy FSR3\Source\fidelityfx-sdk\src\backends\dx12\shaders\frameinterpolation\*.hlsl FSR3\Source\fidelityfx-hlsl
xcopy FSR3\Source\fidelityfx-sdk\src\backends\dx12\shaders\fsr3upscaler\*.hlsl FSR3\Source\fidelityfx-hlsl
xcopy FSR3\Source\fidelityfx-sdk\src\backends\dx12\shaders\opticalflow\*.hlsl FSR3\Source\fidelityfx-hlsl

xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\*.h FSR3\Source\fidelityfx-hlsl\frameinterpolation
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\*.h FSR3\Source\fidelityfx-hlsl\fsr3upscaler
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\*.h FSR3\Source\fidelityfx-hlsl\opticalflow

xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\frameinterpolation\*.h FSR3\Source\fidelityfx-hlsl\frameinterpolation
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\fsr3upscaler\*.h FSR3\Source\fidelityfx-hlsl\fsr3upscaler
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\opticalflow\*.h FSR3\Source\fidelityfx-hlsl\opticalflow
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\opticalflow\*.h FSR3\Source\fidelityfx-hlsl\opticalflow\opticalflow
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\fsr1\*.h FSR3\Source\fidelityfx-hlsl\fsr1
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\spd\*.h FSR3\Source\fidelityfx-hlsl\spd
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\fsr1\*.h FSR3\Source\fidelityfx-hlsl\fsr3upscaler\fsr1
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\spd\*.h FSR3\Source\fidelityfx-hlsl\fsr3upscaler\spd
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\spd\*.h FSR3\Source\fidelityfx-hlsl\opticalflow\spd
xcopy FSR3\Source\fidelityfx-sdk\include\FidelityFX\gpu\spd\*.h FSR3\Source\fidelityfx-hlsl\frameinterpolation\spd

rmdir /s /q FSR3\Source\fidelityfx-sdk\shaders\dx12

rmdir /s /q FSR3\Build

cmake -S FSR3\Source\fidelityfx-sdk -B FSR3\Build -G "Visual Studio 17" -A x64 -DFFX_API_CUSTOM=OFF -DFFX_API_VK=OFF -DFFX_FSR=ON -DFFX_FSR3=ON -DFFX_AUTO_COMPILE_SHADERS=1 -DFFX_BUILD_AS_DLL=1

"C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe" "FSR3\Build\src\backends\dx12\ffx_shader_permutations_dx12.vcxproj" -p:Configuration=Release

"C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe" "FSR3\Build\src\backends\dx12\ffx_backend_dx12_x64.vcxproj" -p:Configuration=Release

"C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe" "FSR3\Build\src\components\frameinterpolation\ffx_frameinterpolation_x64.vcxproj" -p:Configuration=Release

"C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe" "FSR3\Build\src\components\fsr3upscaler\ffx_fsr3upscaler_x64.vcxproj" -p:Configuration=Release

"C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe" "FSR3\Build\src\components\opticalflow\ffx_opticalflow_x64.vcxproj" -p:Configuration=Release

move FSR3\Build\src\backends\dx12\Release\ffx_backend_dx12_x64.dll FSR3\Source\fidelityfx-sdk\bin\ffx_sdk

move FSR3\Build\src\components\frameinterpolation\Release\ffx_frameinterpolation_x64.dll FSR3\Source\fidelityfx-sdk\bin\ffx_sdk

move FSR3\Build\src\components\fsr3upscaler\Release\ffx_fsr3upscaler_x64.dll FSR3\Source\fidelityfx-sdk\bin\ffx_sdk

move FSR3\Build\src\components\opticalflow\Release\ffx_opticalflow_x64.dll FSR3\Source\fidelityfx-sdk\bin\ffx_sdk

mkdir FSR3\Source\fidelityfx-sdk\shaders

move FSR3\Build\src\backends\shaders\dx12 FSR3\Source\fidelityfx-sdk\shaders\dx12

popd
