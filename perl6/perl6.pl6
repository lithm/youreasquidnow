#!/usr/bin/env perl6
my @list = ['k', 'squ'];

loop {
  for @list -> $item {
    say "You're a " ~ $item ~ "id now!";
  }
}
