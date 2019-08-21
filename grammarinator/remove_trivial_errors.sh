for f in output/*.ps; 
    do timeout 1 gs -dBATCH -dNODISPLAY -dNOPAUSE $f ; 
    if [ "$?" -gt "0" ]
        then rm "$f"
    fi 
done
