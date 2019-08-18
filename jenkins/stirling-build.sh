cd ../unified-builds/stirling/
git pull
git submodule update --remote
cd module/libexponent
git checkout stirling
cd ../../
./build.sh

# run arbitrary tests