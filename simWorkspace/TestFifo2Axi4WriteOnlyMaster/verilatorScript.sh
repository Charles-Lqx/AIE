 set -e ; verilator -CFLAGS -fPIC -CFLAGS -m64 -CFLAGS -shared -CFLAGS -Wno-attributes -LDFLAGS -fPIC -LDFLAGS -m64 -LDFLAGS -shared -LDFLAGS -Wno-attributes -CFLAGS -I"/tools/jdk1.8.0_291/include" -CFLAGS -I"/tools/jdk1.8.0_291/include/linux" -CFLAGS -fvisibility=hidden -LDFLAGS -fvisibility=hidden -CFLAGS -std=c++11 -LDFLAGS -std=c++11 --autoflush   --output-split 5000 --output-split-cfuncs 500 --output-split-ctrace 500 -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED --x-assign unique --trace-depth 0 -O3 -CFLAGS -O3 -CFLAGS -DTRACE --trace  --Mdir verilator --top-module TestFifo2Axi4WriteOnlyMaster  -cc "/home/lqx/IdeaProjects/AIE/tmp/job_1/TestFifo2Axi4WriteOnlyMaster.v" --exe verilator/VTestFifo2Axi4WriteOnlyMaster__spinalWrapper.cpp 