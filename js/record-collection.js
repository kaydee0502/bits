// Setup
var recordCollection = {
  2548: {
    albumTitle: 'Slippery When Wet',
    artist: 'Bon Jovi',
    tracks: ['Let It Rock', 'You Give Love a Bad Name']
  },
  2468: {
    albumTitle: '1999',
    artist: 'Prince',
    tracks: ['1999', 'Little Red Corvette']
  },
  1245: {
    artist: 'Robert Palmer',
    tracks: []
  },
  5439: {
    albumTitle: 'ABBA Gold'
  }
};

// Only change code below this line
function updateRecords(records, id, prop, value) {
  if (prop !== "tracks" && value.length > 0){
    records[id][prop] = value;
      }
  else if (value.length === 0){
    delete records[id][prop];
  }
  else if (prop === "tracks" && !records[id].hasOwnProperty("tracks")){
   records[id].tracks = [value];
  }
  else if (prop === "tracks" && records[id].hasOwnProperty("tracks")){
    records[id].tracks.push(value);
    }
  
  
  


  return records;
}

updateRecords(recordCollection, 5439, 'artist', 'ABBA');