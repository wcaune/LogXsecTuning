#!/bin/bash

# --- Configuration ---
SLEEP_DURATION=1 # Seconds to sleep between lines

# --- Function Definition ---
# This function will be called for each line read from the file.
# The line content is passed as the first argument ($1).
process_line() {
  local line_data="$1" # Assign argument to a local variable (good practice)

  # --- Your Processing Logic Goes Here ---
  # Example: Just print the line that was received
  echo "Processing line: [${line_data}]"
  nova -c job/validation_genieonly_job.fcl -s ${line_data} 
  # Add any other commands you want to execute with the line data
  # For example:
  # grep "keyword" <<< "$line_data"
  # curl "$line_data"
  # my_other_command "$line_data"
  # ---------------------------------------

  echo "--- Done processing line ---"
}

# --- Main Script Logic ---
# Author: Dr. Biao Wang
# Check if a filename was provided as an argument
if [ -z "$1" ]; then
  echo "Usage: $0 <filename>"
  exit 1
fi

input_file="$1"

# Check if the input file exists and is readable
if [ ! -f "$input_file" ]; then
  echo "Error: File '$input_file' not found."
  exit 1
fi

if [ ! -r "$input_file" ]; then
  echo "Error: File '$input_file' is not readable."
  exit 1
fi

echo "Starting processing of file: '$input_file'"

# Read the file line by line
# IFS= prevents leading/trailing whitespace trimming
# -r prevents backslash interpretation
while IFS= read -r line || [[ -n "$line" ]]; do # || [[ -n "$line" ]] handles files without trailing newline
  # Call the function, passing the current line as an argument
  process_line "$line"

  # Sleep for the specified duration
  echo "Sleeping for ${SLEEP_DURATION} seconds..."
  sleep "$SLEEP_DURATION"
  mv valid*.root /exp/nova/data/users/biaow/do62fhc/

done < "$input_file" # Redirect the file content into the while loop

echo "Finished processing file: '$input_file'"

exit 0
