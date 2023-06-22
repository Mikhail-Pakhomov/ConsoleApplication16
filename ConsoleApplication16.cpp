#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Video {
    std::string title;
    std::string director;
    std::string genre;
    double popularity_rating;
    double price;
};

std::vector<Video> theTitle(const std::vector<Video>& videos, const std::string& title) {
    std::vector<Video> results;
    for (const auto& video : videos) {
        if (video.title == title) {
            results.push_back(video);
        }
    }
    return results;
}

std::vector<Video> theGenre(const std::vector<Video>& videos, const std::string& genre) {
    std::vector<Video> results;
    for (const auto& video : videos) {
        if (video.genre == genre) {
            results.push_back(video);
        }
    }
    return results;
}

std::vector<Video> theDirector(const std::vector<Video>& videos, const std::string& director) {
    std::vector<Video> results;
    for (const auto& video : videos) {
        if (video.director == director) {
            results.push_back(video);
        }
    }
    return results;
}

Video thePopularity_rating(const std::vector<Video>& videos, const std::string& genre) {
    Video thePopularity_rating;
    double maxRating = 0.0;
    for (const auto& video : videos) {
        if (video.popularity_rating > maxRating && video.genre == genre) {
            thePopularity_rating = video;
            maxRating = video.popularity_rating;
        }
    }
    return thePopularity_rating;
}

void printAllVideos(const std::vector<Video>& videos) {
    for (const auto& video : videos) {
        std::cout << "Title: " << video.title << std::endl;
        std::cout << "Director: " << video.director << std::endl;
        std::cout << "Genre: " << video.genre << std::endl;
        std::cout << "Popularity Rating: " << video.popularity_rating << std::endl;
        std::cout << "Price: " << video.price << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

int main() {
    std::vector<Video> videos;


    videos.push_back({ "Movie 1", "Director 1", "Genre 1", 8.5, 10.0 });
    videos.push_back({ "Movie 2", "Director 2", "Genre 2", 7.8, 8.0 });
    videos.push_back({ "Movie 3", "Director 1", "Genre 2", 9.2, 12.0 });
    videos.push_back({ "Movie 4", "Director 3", "Genre 1", 8.0, 9.5 });

    std::vector<Video> found;
        