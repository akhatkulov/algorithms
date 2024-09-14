<?php

function count_divisors($num) {
    $divisors = [];
    for ($i = 1; $i <= sqrt($num); $i++) {
        if ($num % $i == 0) {
            $divisors[$i] = true;
            $divisors[$num / $i] = true;
        }
    }
    return count($divisors);
}

function main() {
    $input = trim(fgets(STDIN));
    list($N, $M) = explode(' ', $input);

    $gcd = gcd($N, $M);
    $result = count_divisors($gcd);

    echo $result . "\n";
}

function gcd($a, $b) {
    while ($b != 0) {
        $t = $b;
        $b = $a % $b;
        $a = $t;
    }
    return $a;
}

main();

?>
