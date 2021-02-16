def separate(ip, dt)
    a = [''];
    for i in 0...ip.size
        if (ip[i] != ' ')
            a[0] += ip[i];
        else
            break;
        end
    end

    if dt == 'i'
        a[0] = a[0].to_i;;
        a.push(ip.slice(i+1,ip.size).to_i);
    elsif dt == 'f'
        a[0] = a[0].to_f;;
        a.push(ip.slice(i+1,ip.size).to_f);
    end

    return a;
end

sow = 0.0;
c = gets.to_f;
l = gets.to_i;
if (c > 0 and c <= 100 and l > 0 and l <= 100)
    for i in 1..l
        sqmtr = separate(gets, 'f')
        sow += sqmtr[0]*sqmtr[1]*c
    end
    print(sow)
end