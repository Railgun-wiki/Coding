function H = HilbertScan(k)
H0 = [1 2; 4 3];
flag = 0;
for ii = 1:k-1
    if flag ==0
        H = [ H0,               (4^(ii+1)+1)*ones(2^ii) - fliplr(H0);
            (4^ii)*ones(2^ii)+H0' ,(3*4^ii+1)*ones(2^ii)-fliplr(H0')];
    else
        H = [ H0,               (4^ii)*ones(2^ii)+H0';
            (4^(ii+1)+1)*ones(2^ii)-flipud(H0) ,(3*4^ii+1)*ones(2^ii)-(fliplr(H0))'];
    end
    flag = 1 - flag;
end