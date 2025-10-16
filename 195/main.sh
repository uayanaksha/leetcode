# Read from the file file.txt and output the tenth line to stdout.
ctr=1;
while read f; do
  if [ $ctr -gt 10 ]; then 
    break;
  fi
  if [ $ctr -eq 10 ]; then 
    echo $f;
    break;
  fi
  ctr=$((ctr+1))
done < file.txt

