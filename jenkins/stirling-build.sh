cd ../unified-build/stirling/
git pull
git submodule update --remote
cd module/libexponent
git checkout stirling
cd ../../
./build.sh

# run arbitrary tests
# to be completed