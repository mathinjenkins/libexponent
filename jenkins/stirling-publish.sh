# merge stirling to master
cd ../unified-builds/stirling/module/libexponent
git checkout master
git merge stirling
git push

# update stirling to use latest libexponent
cd ../../
git add module/libexponent
git commit -m 'update libexponent to use latest version'
git push