cd build
cmake ./..
make
if [ $? == 0 ]; then
    clear
    ./bin/test_1
else
    echo "Build Failed!"
fi