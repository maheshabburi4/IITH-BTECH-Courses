% declare your map here in this format
map('Australia',
	[wa: [nt,sa], nt: [wa,sa,qld], qld:[nt,sa,nsw],
	nsw: [qld,sa,vic], vic: [sa,nsw], tas:[], 
	sa: [wa,nt,qld,nsw,vic]]).

map('West Europe',
	[portugal: [spain],
	 spain: [portugal, france],
	 belgium: [france, holland, luxembrg, germany],
	 holland: [belgium, germany],
	 luxembrg: [france, belgium, germany],
	 switzerld: [france,germany,austria, italy],
	 italy: [france,switzerld, austria],
	 austria: [germany, switzerld, italy],
	 france: [spain,belgium,luxembrg, germany,switzerld, italy],
	 germany:[holland,belgium,luxembrg,france,switzerld, austria]]).

% declare your colours list here in this format
colors([red,green,blue,purple]).