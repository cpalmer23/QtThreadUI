#!/bin/bash
DYLD_IMAGE_SUFFIX=_debug
export DYLD_IMAGE_SUFFIX
exec /Users/palmerspro/Qt/6.7.1/macos/libexec/rcc "$@"
